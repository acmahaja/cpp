#include <iostream> // standard library header file for 
                    // standard input and output streams
                    // These definitions are included in the std namespace
                    // standard I/O streams provide ways for programs
                    // to get input from and output to an external system.

//V---- int function return type, value returned by the main function is an exit code
int main() // <--- defines a new function named main, the main function is called
{          //      upon execution of the program
    std::cout << "Hello World!\n" << std::endl; // prints "Hello World!" to the
                                              // standard output stream
/*  std          = namespace 
*   ::           = scope resolution power that llows look-ups for objects by name within a namespace
*   std:cout     = standard output stream object, defined in iostream, and it prints to the standard output(stdout)
*   <<           = is, in this context, the stream insertion operator, so called because it inserts an object into the stream object
*   "Hello World"= character string literal, or a "text literal"
*   std:endl     = a special I/O stream manipulator object, also defined in file iostream. Inserting a mainpulator into
*                 
*/
}