// The preprocessor eddits the soruce code, cutting some bits out,
//  changing others, and adding things together

// In source files, we can include preprossor directives. These directives
// tells the preprossor to perform specific actions.

#define ZERO 0      // Directive starts with a # on a new line
#include <iostream> // preprocssor directive to include iostream contents into file
                    // the line adds the function and object that lets you use the standard input and output

// #define something something_else
// This tells the preprocessor that as it goes along the file, it should replace of
// something with something_else. It can also make things similar to functions, but 
// that probably counts as advanced C++


#if something==true
//code
#else
// mode code
#endif

#ifdef thing_that_you_want_to_know_if_is_defined
// code
#endif
// These derectives inser the code that is in the true, but and deletes the false bits,
//  this can be used to have bits of code that are only included on certain OS, without having
// to rewrite the whole code