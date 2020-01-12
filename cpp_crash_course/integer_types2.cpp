#include <cstdio>

int main()
{
    // int mit_zip_code = 02139; this wont compile as octal prefix is not compatiable with int 
    unsigned int a = 3669732608;
    printf("Yabba %x\n", a);    //  %x is the hex format specifier
    unsigned int b = 69;        //  %u is  the unary format specifier
    printf("There are %u, %o leaves here.\n", b, b);    //  %o is the octal format specifier
}