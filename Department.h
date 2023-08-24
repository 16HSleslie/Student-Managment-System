#pragma once
#include <iostream>
#include <string>

class Institution;

class Department
{
	Institution* _institution;
	std::string _name;

public:
	Department(Institution*, std::string);

	Institution* getInstitution() { return _institution; }
	std::string getName() { return _name; }
};
