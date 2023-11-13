/******************************************************************************

q-Create a C++ program to find the common elements between two arrays.
 Thinking process :
 > The program initializes two arrays, 'arr1' and 'arr2', both with a size of 4.
 >It uses nested 'for' loops to compare elements between the two arrays.
 >If an element in 'arr1' is equal to 'arr2', it is considered a common element and displayed.
 >The 'break' statement is used to exit  loop once a common element is found for efficiency.
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int arr1[] = {1, 3, 7, 5};
    int arr2[] = {1, 4, 7, 3};
    
    cout << "Common elements between the two arrays: ";

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

