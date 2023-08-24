#pragma once
#include <iostream>
#include <string>
#include <vector>

class Course;

class CourseAssessmentMarks
{
	Course* _course;
	std::vector<int> _marks;

public:
	CourseAssessmentMarks(Course* course, std::vector<int> marks);

	Course* getCourse() { return _course; }
	std::vector<int> getMarks() { return _marks; }
};

