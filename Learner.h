#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Person.h"
#include "CourseAssessmentMarks.h"


class Learner : public Person
{
    CourseAssessmentMarks _courseAssessmentMarks;

public:
    Learner(int id, std::string firstName, std::string lastname, CourseAssessmentMarks courseAssessmentMarks) : Person(id, firstName, lastname)
    //I have no idea what this error means?
    {
        _courseAssessmentMarks = courseAssessmentMarks;
    }

    CourseAssessmentMarks GetCourseAssessmentMarks() { return _courseAssessmentMarks; }

    static void ReadLearnersFromFile(std::string path, std::vector<Learner>* learners);
};