#pragma once
#include <iostream>
#include <string>

class Institution;

class Department
{
	Institution* _institution;
	std::string _name;

public:
	Department(Institution* instituion, std::string name);

	Institution* getInstitution() { return _institution; }
	std::string getName() { return _name; }
};
