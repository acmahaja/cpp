#include <iostream>

void f(int* p);

template <class T>
void g(T* p);

void h(std::nullptr_t p);

int main()
{
    f(nullptr); // ok
    g(nullptr); // error
    h(nullptr); // ok
}