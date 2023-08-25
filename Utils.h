#include <vector>
#include "Institution.h"
#include "Department.h"
#include "Course.h"

namespace Utils
{
    extern std::vector<Institution> institutions;
    extern std::vector<Department> departments;
    extern std::vector<Course> courses;

    void SeedInstitutions();

    void SeedDepartments();

    void SeedCourses();
}