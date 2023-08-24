#include "Course.h"

Course::Course(Department* department, int code, std::string name, std::string description, int credits, int fees) {
	_department = department;
	_code = code;
	_name = name;
	_description = description;
	_credits = credits;
	_fees = fees;
}