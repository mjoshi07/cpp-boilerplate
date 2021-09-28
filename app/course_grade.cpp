// Copyright None
// Author: Mayank Joshi

#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>

const int numHomework = 3;

int main() {
  std::vector<std::string> studentNames;
  std::vector<double> finalGrades;
  bool allGradesEntered = false;

  /// ask the user how many students are there
  std::cout << "How many students are there? " << std::endl;

  /// store number of students
  int numStudents;
  std::cin >> numStudents;

  /// initialize student counter with 0
  int studentCounter = 0;
  while (!allGradesEntered) {
    /// read the student's name
    std::cout << "Enter your name: \n";
    std::string name;
    std::cin >> name;
    studentNames.push_back(name);

    /// read the midTerm and final grades
    std::cout << "Enter your midTerm grade: ";
    double midTerm, final;
    std::cin >> midTerm;
    std::cout << "Enter your final grade: ";
    std::cin >> final;


    /// initialize the number and sum of grades as 0 for every student
    int count = 0;
    double sum = 0;

    /// a variable to hold homework grades as we read them
    double homeworkGrade;

    /// read the homework till count reaches numHomework
    while (count < numHomework) {
       ++count;
      std::cout << "Enter your " << count << " homework grade: ";

      std::cin >> homeworkGrade;
      sum += homeworkGrade;
    }

    double finalGrade = (0.2 * midTerm) + (0.4 * final) + (0.4 * sum / count);
    finalGrades.push_back(finalGrade);

    /// increment student counter
    studentCounter++;

    /// check if studentCounter has reached number of students
if(studentCounter >= numStudents) {
      /// ask the user if there are more students
      /// only after studentCounter has exceeded the numStudents, incase user forgot someone"
      std::cout << "Are there more students? (y/n) ";

      /// read the answer of the user
      std::string answer;
      std::cin >> answer;

if(answer == "Y" || answer == "y") {
  allGradesEntered = false;
  } else {
          allGradesEntered = true;
      }
    }
  }

for (std::vector<std::string>::size_type i = 0; i < studentNames.size(); ++i) {
    /// set output to desired precision
    std::streamsize prec = std::cout.precision();
    std::cout << studentNames[i] << "'s final grade is " << std::setprecision(4) << finalGrades[i];

    /// reset output precision
    std::cout<< std::setprecision(prec) << std::endl;
  }

  return 0;
}
