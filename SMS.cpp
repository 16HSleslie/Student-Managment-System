#include <iostream>
#include <vector>
#include "Institution.h"
#include "Department.h"
#include "Utils.h"
#include "Learner.h"

int main()
{
    Utils::SeedInstitutions();
    std::vector<Learner> jeff;

    Learner::ReadLearnersFromFile("C:\\Users\\stanhl1\\Desktop\\Student-Managment-System\\learners.txt", &jeff);
}
