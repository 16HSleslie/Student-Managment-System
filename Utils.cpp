#include <vector>
#include "Utils.h"
#include "Institution.h"
#include "Department.h"
#include "Course.h"

void SeedInstitutions()
{
	institutions.push_back(Institution("Otago Polytechnic", "Otago", "New Zealand"));
	institutions.push_back(Institution("Wellington Institue of Technology", "Wellington", "New Zealand"));
	institutions.push_back(Institution("Harvard", "Boston", "New Zealand"));

}

void SeedDepartments()
{
	departments.push_back(Department(&institutions[0], "IT"));
	departments.push_back(Department(&institutions[1], "English"));
	departments.push_back(Department(&institutions[2], "Math"));
}

void SeedCourses() {
	courses.push_back(Course(&departments[0], 2, "IT123: Intro to Networking", "Develop basic skills in networking", 15, 1100));
	courses.push_back(Course(&departments[2], 2, "EN456: Old English history", "learn about old english history", 15, 900));
	courses.push_back(Course(&departments[0], 2, "IT789: Programming 2", "Learn skill in C#", 15, 1100));
}