/*
*   Explicit documentation of code to make it easier to read/maintain
*   Explanation of the purpose and functionality of code
*   Details on the history or reasoning behind the code
*   Placement of copyright/licenses, project notes, special thanks, contributor 
*   credits, etc. directly in the source code 
*/


void SomeFunction(/*argument 1*/int a, /*argument*/ int b);

int main()
{
    //  This is a single-line comment
    int a;  // this is a single-line comment
    int i;  // this is also a single-line comment

    /*
    *   This is a block comment
    */
   int b;

    /* A block comment with the symbol /*
    Note that the compiler is not affected by the second /*
    however, once the end-block-comment symbol is reached,
    the comment ends.
    */
   int c;
}

