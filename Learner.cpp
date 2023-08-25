#include <iostream>
#include <fstream>
#include "Learner.h"
#include "Course.h"
#include "CourseAssessmentMarks.h"
#include "Utils.h"



void Learner::ReadLearnersFromFile(std::string path, std::vector<Learner>* learners) {
	std::string myText;

	std::ifstream MyReadFile(path);

	while (std::getline(MyReadFile, myText)) {
		std::vector<std::string> learnerString;
		std::string delimiter = ",";
		size_t pos = 0;
		std::string token;
		while ((pos = myText.find(delimiter)) != std::string::npos) {
			token = myText.substr(0, pos);
			learnerString.push_back(token);
			myText.erase(0, pos + delimiter.length());
		}
		int id = std::stoi(learnerString[0]);
		Course* course = &Utils::courses[std::stoi(learnerString[3])];
		std::vector<int> marks = { std::stoi(learnerString[4]), std::stoi(learnerString[5]), std::stoi(learnerString[6]), std::stoi(learnerString[7]), std::stoi(learnerString[8]) };
		CourseAssessmentMarks* courseAssessmentMarks = &CourseAssessmentMarks(course, marks);
		(*learners).push_back(Learner(id, learnerString[1], learnerString[2], courseAssessmentMarks));
	}
}