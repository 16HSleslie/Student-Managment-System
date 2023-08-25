#include "Department.h"
#include "Institution.h"

Department::Department(Institution* institution, std::string name) {
	_institution = institution;
	_name = name;
}