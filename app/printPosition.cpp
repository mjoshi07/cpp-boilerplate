/**
 * @file printPosition.cpp
 * @author Mayank Joshi (mayank10@umd.edu)
 * @brief searches a specified string in a given string and prints its begining position
 * @version 0.1
 * @date 2021-09-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>


/**
 * @brief Get the Char Position value in the given string
 * 
 * @param text 
 * @param text_length 
 * @param char_to_search 
 * @param char_to_search_length 
 * @return int 
 */
int getCharPosition(const char* text, int text_length, const char* char_to_search, int char_to_search_length) {
    /// create a variable to store the position of the begining of a given string
    int position(-1);

    /// run a for loop for difference of text_length and char_to_search_length
    for (int i = 0; i < text_length - char_to_search_length + 1; i++) {
        /// declare a boolean variable, found and define it true as default value
        bool found =  true;

        /// run a for loop within previous for loop for char_to_search_length
        for (int j = 0; j < char_to_search_length; j++) {
            /// check, if we found the char_to_search in the text
            if (text[i+j] != char_to_search[j])
                /// if not found, set found boolean value to false
                found = false;

            /// check, if found value is true
            if (found) {
                /// set position value to the index of outer for loop
                position = i;

                /// since we found the string and got the position, break out of all for loops
                break;
            }
        }
    }

    /// return the position value
    return position;
}

/**
 * @brief print the position
 * 
 * @param Nothing
 * @return Void
 * @see getCharPosition
 */
void printPosition() {
    /// define a char array containing a random string
    char text[1024] = "1234567890";

    /// define the char array length
    int text_length = 10;

    /// define the search char array whose begining position is to be searched
    char array_to_search1[4] = "23";

    /// define the search char array length
    int array_to_search1_length = 2;

    /// call getCharPosition function
    int position = getCharPosition(text, text_length, array_to_search1, array_to_search1_length);

    /// check, if position found
    if (position != -1) {
      /// if position found, print the position value
      std::cout << array_to_search1 << " found at position " << position << " in " << text << std::endl;
    } else {
        /// if position not found, print the search array could not be found in the given array
        std::cout << "Could not find "<< array_to_search1 << " in " << text << std::endl;}
}

int main() {
    /// call the printPosition function
    printPosition();

    return 0;
}


