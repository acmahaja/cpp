#include <iostream>

int add2(int i)   // Declaration of add2
{
    int j = i + 2;
    return j;
}
//  Note: add2 is still missing a DEFINITOIN
//  Even though it doesn't appear directly in code,
//  add2 definition may be LINKED in from another object file.

int main()
{
    std::cout << add2(2) << "\n";    // add2(2) will be evaluated at this point
    return 0;
}