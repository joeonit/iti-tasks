/******************************************************************************

q-Create a C++ program that calculates the sum of all even numbers in a given range (e.g., 1 to 100).
 
 Thinking process :
 >The program prompts the user to enter a range sequentially (start and end).
 >Uses loop to iterate through each number in the specified range.
 >Checks if the current number is even using the condition (i % 2 == 0).If t even, it adds it to 'sum'.
 > program displays the sum of even numbers within the specified range.



*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int start, end, sum = 0;
    cout << "Enter your range sequentially: ";
    cin >> start >> end;
        
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of even numbers is " << sum << endl;

}

