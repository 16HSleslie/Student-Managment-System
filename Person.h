#pragma once
#include <string>

class Person
{
protected:
	int _id;
	std::string _firstName;
	std::string _lastName;

public:
	Person(int id, std::string firstName, std::string lastName);

	int GetId() { return _id; }
	std::string GetFirstName() { return _firstName; }
	std::string GetLastName() { return _lastName; }
};

