// Copyright None
// Author: Mayank Joshi

#ifndef INCLUDE_CLASSGRADE_H_
#define INCLUDE_CLASSGRADE_H_

#include <iostream>
#include <map>
#include <vector>

/// Compute class grade point average
///
/// Class takes students and their grades to compute class grade point average
/// add new students
/// update grades of existing students
class ClassGrade {
 public:
  /// Constructor
  explicit ClassGrade(const std::map<int, double>& studentsGrades);

  /// Destructor
  ~ClassGrade();

 public:
  /// @param student ID
  /// @param student Grade
  /// @return Nothing
  void addStudentGrade(int student, double grade);

  /// @param student ID
  /// @param student Grade
  /// @return Nothing
  void changeStudentGrade(int student, double newGrade);

  /// @param Nothing
  /// @returns grade point average of the whole class
  double getClassGradePointAverage();

 private:
  /// @param Nothing
  /// @returns Number of dtudents
  int getNumStudents();

  /// @param Nothing
  /// @return Sum of all grades 
  double getSumGrades();

 private:
  /// stored the student id and their grades in a key:value style
  std::map<int, double> mStudentsGrades;

};

#endif  /// INCLUDE_CLASSGRADE_H_

