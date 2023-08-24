#pragma once
#include "Person.h"

class CourseAssessmentMarks;

class Learner : public Person
{
    CourseAssessmentMarks* _courseAssessmentMarks;

public:
    Learner(int id, std::string firstName, std::string lastname, CourseAssessmentMarks* courseAssessmentMarks) : Person(id, firstName, lastname) {};

    CourseAssessmentMarks* getCourseAssessmentMarks() { return _courseAssessmentMarks; }
};