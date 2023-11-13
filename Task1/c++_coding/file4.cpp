/******************************************************************************

q-Write a C++ function that counts the number of words in a given sentence (string).
 This can be done by c style char* sentence; but with the use of the c++ string libraray it's much easierto
 
 Thinking process :
 >The program initializes a variable 'wordCount' to 1, there is at least one word in any sentence.
 >Prompts the user to enter a sentence and retrieves it using getline.
 >Iterates through each character in the sentence using a range-based for loop.
 >Checks if the character is a space (' ') to identify word boundaries and increments 'wordCount' accordingly.
 >Finally, displays the total number of words in the sentence.
 

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int wordCount = 1;
    string sentence;
    cout <<"Enter your sentence"<<endl;
    getline(cin, sentence);
    
    for(char x : sentence){
        
        if (x == (' ')){
            wordCount++;
        }
    }
    
    cout << "There are " <<wordCount<< " words in the sentence";
}
