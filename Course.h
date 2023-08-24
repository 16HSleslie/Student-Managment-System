#pragma once
#include <iostream>
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

	Department* getDepartment() { return _department; }
	int getCode() { return _code; }
	std::string getName() { return _name; }
	std::string getDescription() { return _description; }
	int getCredits() { return _credits; }
	int getFees() { return _fees; }
};

