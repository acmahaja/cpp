#include <iostream>

void f(int *p);

template <class T>
void g(T*p);

void h(std::nullptr_t p);

int main(void)
{
    f(nullptr); //ok
    g(nullptr); //
    h(nullptr);
}