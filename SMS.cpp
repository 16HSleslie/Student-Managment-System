#include <iostream>
#include <vector>
#include "Institution.h"
#include "Department.h"
#include "Utils.h"
#include "Learner.h"
#include "CourseAssessmentMarks.h"

int main()
{
    Utils::SeedInstitutions();
    Utils::SeedDepartments();
    Utils::SeedCourses();
    std::vector<Learner> jeff;

    Learner::ReadLearnersFromFile("C:\\Users\\idisl\\Documents\\Programming Practice\\Student-Managment-System\\learners.txt", &jeff);

    std::cout << jeff[0].GetCourseAssessmentMarks().GetHighestMarks()[0];
}
