/******************************************************************************

q-Write a C++ function to determine if a given string is a palindrome (reads the same backward as forward).
 
 Thinking process :
 >we define a function 'palindrome' that checks if a given string is a palindrome.
 >Inside the function, it creates a reversed array ('revArr') of characters from the input string.
 >It then compares the characters of the original string with the reversed array.
 >If the characters do not match at any position, the function returns false; otherwise, it returns true.
 
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

bool palindrome(string text) {
    // Make a new array and append the text array in reverse
    char revArr[text.size()];
    int j = 0;
    for (int i = text.size() - 1; i >= 0; i--) {
        revArr[j] = text[i];
        j++;
    }

    // Compare between the two arrays, and if they don't match, return false
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != revArr[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a word or a sentence: ";
    getline(cin, input);


    if (palindrome(input)) {
        cout << "The entered string is a palindrome." << endl;
    } else {
        cout << "The entered string is not a palindrome." << endl;
    }

}
