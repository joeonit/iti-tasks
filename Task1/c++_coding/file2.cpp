/******************************************************************************

q-Create a C++ program that checks if a number is prime or not and displays the result.

prerequisite consepts
> prime numbers : is a natural numbers greater than 1 that is not a product of two smaller natural numbers, it starts with 2
 
 Thinking process
  > First is to make a funcion to check if the nuber is prime or not
  > A prime number is only divisible by one and itself so we may check for number is prime by starting to calculate if it's divisible by a smaller number less than itself and we should stop checking at one because every number is divisible by one so a loop would be ideal
  > So we established that we , but this loop must stop  if we find divisible number or if we reach one if at function must return false, if not return true
 > The main function is responsible for taking user input and checking if the number is greater than one and the check prime function is true if so, it outputs numbers is prime not prime


*******************************************************************************/

#include<iostream>
using namespace std;

bool checkPrime(int n){
    // a loop to check if the number is divisable by any number exepit for itself and one
    for( int i = n-1; i>1; i--){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout <<"Enter a number to check "<<endl;
    cin >> number;
    
    if(number > 1 && checkPrime(number)) cout << "The number is prime";
    else{cout << "The number is not prime";}
}
