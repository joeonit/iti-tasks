/******************************************************************************

q-Implement a C++ program to reverse an array in-place (without using additional data structures)
 Thinking process : 
 >A loop iterates through each element in the array.
 >The 'replace' variable calculates the new value for each element based on its index and the array size.
 >The modified array is then displayed using std::cout.

*******************************************************************************/
#include <iostream>
int main()
{
    int size = 10;
    int replace;
    int v[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int x : v){        // for each x in v
        replace = size - x - 1; // 10-0-1=9 for the first iteration
        v[x]= replace;
        std:: cout << v[x] << std:: endl;
    }
}
