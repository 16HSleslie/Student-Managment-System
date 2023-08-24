#pragma once
#include <string>

class Department;

class Course
{
	Department* _department;
	int _code;
	std::string _name;
	std::string _description;
	int _credits;
	int _fees;

public:
	Course(Department* department, int code, std::string name, std::string description, int credits, double fees);

	Department* GetDepartment() { return _department; }
	int GetCode() { return _code; }
	std::string GetName() { return _name; }
	std::string GetDescription() { return _description; }
	int GetCredits() { return _credits; }
	int GetFees() { return _fees; }
};

