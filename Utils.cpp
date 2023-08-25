#include "Utils.h"
#include "Institution.h"

std::vector<Institution> Utils::institutions;
std::vector<Department> Utils::departments;
std::vector<Course> Utils::courses;

void Utils::SeedInstitutions()
{
    institutions.push_back(Institution("Otago Polytechnic", "Otago", "New Zealand"));
    institutions.push_back(Institution("Wellington Institue of Technology", "Wellington", "New Zealand"));
    institutions.push_back(Institution("Harvard", "Boston", "USA"));
}

void Utils::SeedDepartments() {
    departments.push_back(Department(&institutions[0], "IT"));
    departments.push_back(Department(&institutions[1], "English"));
    departments.push_back(Department(&institutions[0], "Math"));
}

void Utils::SeedCourses() {
    courses.push_back(Course(&departments[0], 2, "IT123: Intro to Networking", "Learn basic skill in networking", 15, 1100));
    courses.push_back(Course(&departments[1], 3, "EN456: Old English History", "Learn the history of Old English language", 15, 900));
    courses.push_back(Course(&departments[0], 4, "IT789: Programming 2", "Learn the basics of C#", 15, 1100));
}