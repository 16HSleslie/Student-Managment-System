#pragma once
#include <iostream>
#include <string>

class Person
{
protected:
	int _id;
	std::string _firstName;
	std::string _lastName;

public:
	Person(int id, std::string firstName, std::string lastName);

	int getId() { return _id; }
	std::string getFirstName() { return _firstName; }
	std::string getLastName() { return _lastName; }
};

