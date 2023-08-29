#include <string>
#include <vector>
#include "CourseAssessmentMarks.h"
#include "Course.h"

CourseAssessmentMarks::CourseAssessmentMarks(Course* course, std::vector<int> marks) {
	_course = course;
	_marks = marks;
}

std::string CourseAssessmentMarks::ConvertMarkToGrade(int mark) {
    if (mark >= 90) return "A+";
    else if (mark >= 85) return "A";
    else if (mark >= 80) return "A-";
    else if (mark >= 75) return "B+";
    else if (mark >= 70) return "B";
    else if (mark >= 65) return "B-";
    else if (mark >= 60) return "C+";
    else if (mark >= 55) return "C";
    else if (mark >= 50) return "C-";
    else if (mark >= 40) return "D";
    else return "E";
}

std::vector<int>* CourseAssessmentMarks::GetAllMarks() {
    return &_marks;
}

std::vector<std::string> CourseAssessmentMarks::GetAllGrades() {
    std::vector<std::string> grades;
    for (int mark : _marks) {
        grades.push_back(ConvertMarkToGrade(mark));
    }
    return grades;
}

std::vector<int> CourseAssessmentMarks::GetHighestMarks() {
    auto maxElement = std::max_element(_marks.begin(), _marks.end());
    auto count = std::count(_marks.begin(), _marks.end(), *maxElement);
    std::vector<int> highestMarks(count, *maxElement);
    return highestMarks;
}

std::vector<std::string> CourseAssessmentMarks::GetHighestGrade() {
    auto maxElement = std::max_element(_marks.begin(), _marks.end());
    auto count = std::count(_marks.begin(), _marks.end(), *maxElement);
    std::string grade = ConvertMarkToGrade(*maxElement);
    std::vector<std::string> highestGrades(count, grade);
    return highestGrades;
}

std::vector<int> CourseAssessmentMarks::GetFailMarks() {
    std::vector<int> failMarks;
    for (int mark : _marks) {
        if (mark < 50) failMarks.push_back(mark);
    }
    return failMarks;
}

double CourseAssessmentMarks::GetAverageMark() {
    int total;
    for (int mark : _marks) {
        total += mark;
    }
    return total / _marks.size();
}

std::string CourseAssessmentMarks::GetAverageGrade() {
    return ConvertMarkToGrade(GetAverageMark());
}
