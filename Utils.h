#pragma once
#include <vector>
#include "Institution.h"
#include "Department.h"
#include "Course.h"


std::vector<Institution> institutions;
std::vector<Department> departments;
std::vector<Course> courses;


namespace Utils
{
	void SeedInstitutions();

	void SeedDepartments();

	void SeedCourses();
}