#include <iostream>
#include "functions.h"

int add2(int i); // The function declaration of add2
int multiply(int a, int b = 7); //  b has default value of 7
                                //  This can only be done for the 2nd+ paramater
int foo(int x) {std::cout << x << "\n";}    // you can declare the foo function and body first
int main()
{  
    std::cout << add2(2) << "\n";   //add2 will be evaluated at this point
                                    // The result is printed
    std::cout << multiply(3) << "\n";
    foo(3);
    foo2();

    return 1;
}

int add2(int i) // add2's function definition
{
    int j = i + 2;  //  Definition of variable j as the value of i+2
    return j;       //  Returning or, in essence, substitution of j for a function call to add2
}

int multiply(int a, int b)
{
    return a * b;   //  if multiply() os called wiht one parameter, the
                    //  value will be multiplied by the default, 7.
}