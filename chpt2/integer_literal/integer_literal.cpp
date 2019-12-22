#include <iostream>

int d = 42;   //  decimal-literal, uses base 10
int  o = 052; //  Octo-literal, uses base 8
int x = 0x2a; //  hex-literal uses base 16
int X = 0X2A; //      ""
int b = 0b101010;//  binary-literal uses base 2
unsigned int u_1 = 42u;// long-suffix, uses base 10 doesn't have negatives
unsigned long long l1 = 18446744073709550592ull;    // long suffix
unsigned long long l2 = 18'446'744'073'709'550'592llu; 
unsigned long long l3 = 1844'6744'0737'0955'0592uLL;
unsigned long long l4 = 184467'440737'0'95505'92LLU;

int main()
{
    std::cout << d << "\n";
    std::cout << o << "\n";
    std::cout << x << "\n";
    std::cout << X << "\n";
    std::cout << b << "\n";
    std::cout << u_1 << "\n";
    std::cout << l1 << "\n";
    std::cout << l2 << "\n";
    std::cout << l3 << "\n";
    std::cout << l4 << "\n";
}

