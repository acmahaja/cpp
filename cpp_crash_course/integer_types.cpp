#include <cstdio>

int main()
{
    unsigned short a = 0b10101010;  //  0b binary prefix
    printf("%hu\n", a);
    int b = 0123;                   //  0 octal prefix
    printf("%d\n",b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;  //  0x hex prefix
    printf("%llu\n",d);
}