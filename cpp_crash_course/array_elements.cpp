#include <cstdio>
int main()
{
    short array[] = {104, 105, 32, 98, 105, 108, 108, 0};
    size_t n_elements = sizeof(array) / sizeof(short);
    printf("%lu",n_elements);
}