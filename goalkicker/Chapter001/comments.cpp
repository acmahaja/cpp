#include <iostream>
int main()
{
    int a = 1; // This is a single comment
    int i;
    /*
    *   This is a block comment
    */
   /* A block comment with the symbol /*     
   Note that the compiler is not affected by the second /*
   however, once the end-block-comment symbol is reached,
   the comment ends.   
   */
    int b;
    std::cout << a << std::endl;
}