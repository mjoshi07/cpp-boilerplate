// Copyright None
// Author: Mayank Joshi

#include <iostream>
#include <numeric>
#include <vector>


int main() {
  /// ask the user to enter the number
  std::cout << "Please enter the number \n"
               "To Exit, Press Esc and Enter" << std::endl;
  std::vector<double> numbers;
  double num, avg;

  /// read the numbers and store them in a vector
  while (std::cin >> num)
    numbers.push_back(num);

if(numbers.size()) {
	/// calculates the average of the numbers stored in the vector 
    avg = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    std::cout << "Avg of the above numbers is: " << avg <<std::endl;
  } else {
    std::cout << "Could not calculate avg as user did not input any number" << std::endl;
  }
}
