#pragma once
#include <string>

class Institution;

class Department
{
	Institution* _institution;
	std::string _name;

public:
	Department(Institution* instituion, std::string name);

	Institution* GetInstitution() { return _institution; }
	std::string GetName() { return _name; }
};
