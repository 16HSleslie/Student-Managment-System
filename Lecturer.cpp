#include "Lecturer.h"

Lecturer::Lecturer(int id, std::string firstName, std::string lastName, Position* position, Salary* salary, Course* course) : Person(id, firstName, lastName) {
	_position = position;
	_salary = salary;
	_course = course;
}