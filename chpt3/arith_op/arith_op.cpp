#include <iostream>

#define pi (22/7)
#define R (3.0)
#define r (3.0)
int main()
{
    double vol = 4.0*pi*R*R*R/3.0 - 4.0*pi*r*r*r/3;

    // Addition:
    int a = 2+4/2;
    int b = (3+3)/2;

    // Multiplication
    int c = 3+4/2*6;
    int d = 3*(3+6)/9;
    
    // Division and Modulous
    int g = 3-3%1;
    int h = 3-(3%1);
    int i = 3-3/3%3;
    int l = 3-((3/1)%3);
    int m = 3-(3/(1%3));
}