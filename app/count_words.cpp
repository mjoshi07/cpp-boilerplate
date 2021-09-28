// Copyright None
// Author: Mayank Joshi

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


void readWords(std::vector<std::string>& words);  // NOLINT
void countWords(std::vector<std::string>& words); // NOLINT

int main() {
  /// ask the user to input words line by line
  std::cout << "Please enter words" << std::endl;
  std::cout << "To Exit press Enter Twice" << std::endl;

  std::vector<std::string> words;

  /// read words from the input
  readWords(words);

  /// print out number of words entered by user
  std::cout << "Num of words: " << words.size() << std::endl;

  /// sort the word list so that same words are lined up together
  std::sort(words.begin(), words.end());

  // count the individual words and print them on the console
  countWords(words);

  return 0;
}

/// @param list of words
/// @returns Void
/// \brief reads the input from the user and store them in a vector of string
void readWords(std::vector<std::string>& words) { // NOLINT
  /// clear the vector so as to remove any garbage values
  words.clear();

  /// a variable to hold the string entered by user
  std::string word;
    while (true) {
    /// read the string value
    std::getline(std::cin, word);

    /// break out if string is empty else store the values in vector
    if (word != "" && word != " ") {
      words.push_back(word);
    } else { break; }
  }
}

/// @param list of words
/// @returns Void
/// \brief count how many times every word has appeared in the input stream
void countWords(std::vector<std::string>& words) { // NOLINT
  std::string prevWord = words[0];
  int count = 0;

  if (words.size()) {
    for (std::vector<std::string>::size_type i = 0; i < words.size(); ++i) {
      std::string word = words[i];

      /// if current word and previous word are same increment the individual word count
      if (word == prevWord) {
        count++;
      } else {
        /// print out the prev word and its count as the current word is different from prev word
        std::cout << prevWord << ": " << count <<std::endl;

        /// set prev word to current word for further processing
        prevWord = word;

        /// reset individual word count to 1
        count = 1;
      }
    }
    std::cout << prevWord << ": " << count <<std::endl;
  }
}
