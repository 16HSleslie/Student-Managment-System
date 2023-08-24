#include <string>
#include "Person.h"

Person::Person(int id, std::string firstName, std::string lastName) {
	_id = id;
	_firstName = firstName;
	_lastName = lastName;
}
