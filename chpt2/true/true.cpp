#include <iostream>

bool f();

int main()
{
    bool ok = true;
    std::cout << "ok = ";
    std::cout << ok << "\n";
    if(!f())
    {
        ok = false;
        std::cout << "ok = ";
        std::cout << ok << "\n";
        goto end;
    }
    end:
        return 1;

}

bool f()
{
    return false;
}