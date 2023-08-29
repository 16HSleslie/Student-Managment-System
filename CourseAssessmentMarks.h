#pragma once
#include <string>
#include <vector>

class Course;

class CourseAssessmentMarks
{
	Course* _course;
	std::vector<int> _marks;

public:
	CourseAssessmentMarks(Course* course, std::vector<int> marks);

	Course* GetCourse() { return _course; }
	std::vector<int> GetMarks() { return _marks; }

	std::string ConvertMarkToGrade(int mark);
	std::vector<int>* GetAllMarks();
	std::vector<std::string> GetAllGrades();
	std::vector<int> GetHighestMarks();
	std::vector<std::string> GetHighestGrade();
	std::vector<int> GetFailMarks();
	double GetAverageMark();
	std::string GetAverageGrade();
};

