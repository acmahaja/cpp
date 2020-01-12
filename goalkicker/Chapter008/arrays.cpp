#include <iostream>
#include <string>

int main()
{
    int arrayOfInts[5];
    int arrayOfInts1[5] = {10,20,30,40,50};
    int arrayOfInts2[] = {10,20,30,40,50};
    int arrayOfInts3[5] = {10,20};
    char arrayOfChars[5];
    char arrayOfChars1[5] = {'a', 'b', 'c', 'd', 'e'};
    double arrayOfDoubles[5] = {1.14159, 2.14159, 3.14159, 4.14159, 5.14159} ;
    std::string arrayOfStrings[5] = {"C++", "is", "super", "duper", "great"};
    int array[5] = {10/*Element no.0*/, 20/*Element no.1*/, 30, 40, 50/*Element no.4*/};
    std::cout << array[4]; //outputs 50
    std::cout << array[0]; //outputs 10

    return 0;
}
