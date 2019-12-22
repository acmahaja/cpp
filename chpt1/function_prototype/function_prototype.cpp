#include <iostream>
// foo.cpp --> foo.o 
// once compiled a link is connected to the compile corresponding object file
// foo.o 
// foo's prototype declaration is "hidden" in here
#include "foo.h"

int main()
{
    foo(2);     // Ok: foo is known, called even though its 
                // body is not yet defined
}


