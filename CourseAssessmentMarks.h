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
};

