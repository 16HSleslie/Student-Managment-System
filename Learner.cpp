#include <iostream>
#include <fstream>
#include "Learner.h"
#include "Course.h"
#include "CourseAssessmentMarks.h"
#include "Utils.h"



void Learner::ReadLearnersFromFile(std::string path, std::vector<Learner>* learners) {
	std::string myText;

	std::ifstream MyReadFile(path);

	//loops through all the lines in the file
	while (std::getline(MyReadFile, myText)) {

		std::vector<std::string> learnerString;
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
			learnerString.push_back(token);
			//deletes the part of the line it just saved 
			myText.erase(0, pos + delimiter.length());
		}

		int id = std::stoi(learnerString[0]);
		//takes the part of the vector that is used to save course number and grabs a ptr for the coralating Course
		Course* course = &Utils::courses[std::stoi(learnerString[3])];
		std::vector<int> marks = { std::stoi(learnerString[4]), std::stoi(learnerString[5]), std::stoi(learnerString[6]), std::stoi(learnerString[7]), std::stoi(learnerString[8])};
		//not to sure about this part if it will work, i think every time it runs the loop it will just 
		//replace the old courceassessmentmark that was saved there???
		//yea it wont work keeps giving me an error saying '&' requires i-value
		CourseAssessmentMarks courseAssessmentMarks = CourseAssessmentMarks(course, marks);
		//creats an object of learner and saves it to vector that the ptr is pointing to
		(*learners).push_back(Learner(id, learnerString[1], learnerString[2], courseAssessmentMarks));
	}
}