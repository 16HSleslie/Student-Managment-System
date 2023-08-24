#include "CourseAssessmentMarks.h"
#include "Course.h"

CourseAssessmentMarks::CourseAssessmentMarks(Course* course, std::vector<int> marks) {
	_course = course;
	_marks = marks;
}