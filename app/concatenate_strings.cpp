// Copyright None
// Author: Mayank Joshi

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/// a variable to store the concatenated string
std::string concatenatedString = ""; // NOLINT

void concatenate(std::string& word); // NOLINT

int main() {
  /// vector containing some random words
  std::vector<std::string> words {"Shazzam", "Small", "See", "Fall", "Drift", "Punch", "", ""};

  /// print out the words line by line on the console
  for (std::string word : words) {
    std::cout << word << std::endl;
  }

  /// loop through the vector and concatenate each word
  for_each(words.begin(), words.end(), concatenate);

  /// print out the concatenated string
  std::cout << concatenatedString << std::endl;
  return 0;
}

/// @param string 
/// @returns Void
/// \brief concatenates the word to the globally defined value
void concatenate(std::string& word) { // NOLINT
  /// concatenate the word
  concatenatedString += word;
}
