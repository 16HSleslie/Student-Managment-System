#pragma once
#include <string>
#include "Person.h"

enum Position 
{
    LECTURER,
    SENIOR_LECTURER,
    PRINCIPAL_LECTURER,
    ASSOCIATE_PROFESSOR,
    PROFESSOR
};

enum Salary
{
    LECTURER_SALARY = 85000,
    SENIOR_LECTURER_SALARY = 100000,
    PRINCIPAL_LECTURER_SALARY = 115000,
    ASSOCIATE_PROFESSOR_SALARY = 130000,
    PROFESSOR_SALARY = 145000,
};

class Course;

class Lecturer : public Person
{
    Position* _position;
    Salary* _salary;
    Course* _course;

public:
    Lecturer(int id, std::string firstName, std::string lastName, Position* position, Salary* salary, Course* course) : Person(id, firstName, lastName) 
    {
        _position = position;
        _salary = salary;
        _course = course;
    };
};

