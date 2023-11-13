/******************************************************************************

q-Develop a C++ program that prints a pattern of a right-angled triangle using asterisks (*)
 
 Thinking process :
 >  it takes a number of rows form the user then have a nested loop to print 1* in the first row then 2* at the second row and so on

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}
