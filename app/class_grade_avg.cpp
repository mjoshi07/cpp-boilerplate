// Copyright None
// Author: Mayank Joshi

#include <ClassGrade.h>

int main() {
/// generate a map containing students as the key and their grade as the value
std::map < int, double > students { { 1, 100 }, {2, 20}, {3, 30}, {4, 40}, {5, 50}, {6, 600}};

/// create a ClassGrade object with the student list
ClassGrade grading(students);

/// calculate class grade average by calling the function
std::cout << grading.getClassGradePointAverage() << std::endl;

/// add a new student to the list
grading.addStudentGrade(1, 20);

/// change the grade of a student
grading.changeStudentGrade(1, 22);

return 0;
}
