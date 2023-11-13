/******************************************************************************

q-Write a C++ program to find the factorial of a given number using a recursive function.

prerequisite consepts
> recursive function : is a function that calls itself in its own definition
> factorial : !n a mathametical way to represents the multiplication of all numbers between 1 and n !3= 3x2x1
 
 Thinking process
 > First is to crearte a function to culculate the factorial and takes a parmeter as the user input form the main function and retruns the value of the calculated fact
 >To do this using the recursion method, first we need to put a trigger stop to the recursive as it will loop for ever hear the ideal stop is at 1 then it will do the calculation by multiplying n * n-1 as n is the pameter for the funcion
 >The main function is resopnsable for taking user input and desplying the output

trace example
> user enters the number 3 and it stores the value in the variable num
> when it outputs the result, it makes a call to the function "fact" with n=num=3
> the function checks if n=0, which is not true, so it continues to the recursive part
> it returns 3 x fact(2) = 3 x (2 x fact(1)) = 3 x 2 x (1 x fact(0)) = 3 x 2 x 1 x fact(0)
> the value is outputed to the user "Factorial is: 6"

*******************************************************************************/

#include<iostream>

int fact(int n) {
    
    // recursion stop trigger
    if ( n == 1 ) {
        return 1;
    }
    
    // calculating the factorial using recursive method
    else {
        return n * fact(n - 1);
    }
}

int main() {
    
    int num;
    std:: cout << "Enter a number ";
    std:: cin >> num;


    std:: cout << "Factorial is: " << fact(num) << std:: endl;
        
    
    return 0;
    
    
}
