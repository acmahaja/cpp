#include <cstddef>
#include <cstdio>

int main()
{
    unsigned long maxium = 0;
    unsigned long values[] = {10, 20, 30, 40, 0};
    for(size_t i=0; i <5; i++)
    {
        if (values[i] > maxium)
            maxium = values[i];
    }
    printf("The maximum value is %lu\n", maxium);
}