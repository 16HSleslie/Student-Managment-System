#include "Course.h"
#include "Department.h"

Course::Course(Department* department, int code, std::string name, std::string description, int credits, double fees) {
	_department = department;
	_code = code;
	_name = name;
	_description = description;
	_credits = credits;
	_fees = fees;
}