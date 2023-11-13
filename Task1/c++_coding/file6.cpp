/******************************************************************************

q-Implement a C++ program that finds the largest and smallest elements in an array.
 
 Thinking process :
 >The program initializes an array 'v' with six elements also variables 'max' and 'min' with the first and last elements of the array.
 >Uses a 'for' loop to iterate through the array, comparing each element with 'max' and 'min'.
 >If the current element is greater than 'max', it updates 'max'.
 > If the current element is smaller than 'min', it updates 'min'.
 >Outputs the latest updated value

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int v[6] = {4, 2, 9, 7, 5, 1};
    int max = v[0];
    int min = v[5];

    for (int i = 1; i < 6; i++) {
        if (v[i] > max) {
            max = v[i];
        }
        if (v[i] < min) {
            min = v[i];
        }
    }

    cout << "the largest number is  " << max <<" and the smallest number is "<< min <<endl;

}
