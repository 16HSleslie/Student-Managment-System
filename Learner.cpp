#include "Learner.h"

Learner::Learner(int id, std::string firstName, std::string lastname, CourseAssessmentMarks* courseAssessmentMarks) : Person(id, firstName, lastname)
{
	_courseAssessmentMarks = courseAssessmentMarks;
}