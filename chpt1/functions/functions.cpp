#include <iostream>
int add3(int i, int j=3);
int add2(int i);

//  Note: add2 is still missing a DEFINITOIN
//  Even though it doesn't appear directly in code,
//  add2 definition may be LINKED in from another object file.

int main()
{
    std::cout << add2(2) << "\n";    // add2(2) will be evaluated at this point
    std::cout << add3(2,2) << "\n";
    return 0;
}

int add2(int i, int j)
{
    int k = i + j + 2;
    return k;
}

int add2(int i)   // Declaration of add2
{
    int j = i + 2;
    return j;
}
