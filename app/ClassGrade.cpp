// Copyright None
// Author: Mayank Joshi

#include <ClassGrade.h>

ClassGrade::ClassGrade(const std::map<int, double>& studentsGrades) {
  /// initializes the students and their grades
  mStudentsGrades = studentsGrades;
}

ClassGrade::~ClassGrade() {
  /// clears the map which stored the students and their grades
  mStudentsGrades.clear();
}

void ClassGrade::addStudentGrade(int student, double grade) {
  /// add student and grade iff it does not exists already in the map
  if (mStudentsGrades.find(student) == mStudentsGrades.end()) {
  mStudentsGrades.insert({ student, grade });
  } else { std::cout << "Student Already Exists,"
  "Try changing the student grade instead of adding new student grade." << std::endl;
  }
}

void ClassGrade::changeStudentGrade(int student, double newGrade) {
  /// change the student's grade iff it exists already in the map
  if (mStudentsGrades.find(student) == mStudentsGrades.end()) {
  std::cout << "Student does not exist, first add student and grade." << std::endl;
  } else {
    std::cout << "Student's previous grade: " << mStudentsGrades[student] << std::endl;
    std::cout << "Changing student's grade" <<std::endl;
    mStudentsGrades[student] = newGrade;
    std::cout << "Student Grade changed to: " << mStudentsGrades[student] << std::endl;
  }
}

int ClassGrade::getNumStudents() {
  /// returns the number of students
  if (mStudentsGrades.size()) {
    return mStudentsGrades.size();
  } else { return 0; }
}

double ClassGrade::getSumGrades() {
  /// returns the total sum of grades
  if (mStudentsGrades.size()) {
    double sum(0);

  /// loop through the map and sum up all the grade values
  for (auto student : mStudentsGrades) {
    sum += student.second;
  }
  return sum;
  } else { return 0.0; }
}

double ClassGrade::getClassGradePointAverage() {
  /// calculates the grade point average for the class

  /// a variable to store the class grade avg
  double classGradePointAverage(0.0);
  if (mStudentsGrades.size()) {
    int numStudents = getNumStudents();
    double sumGrades = getSumGrades();

    classGradePointAverage = sumGrades / static_cast<double>(numStudents);

    return classGradePointAverage;
  } else {
    std::cout << "No students found therefore grade point average cannot be calculated.";
    classGradePointAverage = -1;
  }
  return classGradePointAverage;
}


