#include "iostream"


int main(void)
{
    int a = 1;
    ++a;             // result = 2
    a--;             // result = 1
    int minusa = -a; // result = -1

    bool b = true;
    !b; // result: true

    a = 4;
    std::cout << a << std::endl; // prints 5
    int c = a++/2;   //result = 2
    std::cout << a << std::endl; // prints 5
    int d = ++a/2;      

    int arr[4] = {1,2,3,4};

    int *ptr1 = &arr[0];
    int *ptr2 = ptr1++;
    std::cout << *ptr1++ << std::endl;

    int e = arr[0]++;
    std::cout << e << std::endl;
    std::cout << *ptr2 << std::endl;   
    
}