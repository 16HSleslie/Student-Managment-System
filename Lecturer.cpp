#include <iostream>
#include <fstream>
#include "Lecturer.h"
#include "Course.h"
#include "Utils.h"

void Lecturer::ReadLecturersFromFile(std::string path, std::vector<Lecturer>* lecturers) {
	std::string myText;

	std::ifstream MyReadFile(path);

	//loops through all the lines in the file
	while (std::getline(MyReadFile, myText)) {

		std::vector<std::string> lecturerString;
		std::string delimiter = ",";
		size_t pos = 0;
		std::string token;

		//add an extra comma at the end so the while loop doesnt skip the last number
		myText += delimiter;

		//loop that finds the closest comma and runs until the end on of the line
		while ((pos = myText.find(delimiter)) != std::string::npos) {
			//gets a substring up until the first comma
			token = myText.substr(0, pos);
			//saves the string to a vector
			lecturerString.push_back(token);
			//deletes the part of the line it just saved 
			myText.erase(0, pos + delimiter.length());
		}

		int id = std::stoi(lecturerString[0]);
		//takes the part of the vector that is used to save course number and grabs a ptr for the coralating Course
		Course* course = &Utils::courses[std::stoi(lecturerString[3])];
		Position position = (Position)std::stoi(lecturerString[5]);
		Salary salary = (Salary)std::stoi(lecturerString[4]);
		(*lecturers).push_back(Lecturer(id, lecturerString[1], lecturerString[2], position, salary, course));
	}
}