#include <iostream>

bool f(bool pass);
int main()
{
    bool ok = true;
    std::cout << ok << "\n";
    if(!f(ok))
    {
        ok = false;
        std::cout << ok << "\n";
        goto end;
    }
    end:
        std::cout << ok << "\n";
        return 0;
}

bool f(bool pass)
{
    std::cout << pass << "\n";
    return !pass;
}