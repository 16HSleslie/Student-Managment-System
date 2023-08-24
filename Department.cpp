#include "Department.h"
#include "Institutions.h"

Department::Department(Institution* institution, std::string name) {
	_institution = institution;
	_name = name;
}