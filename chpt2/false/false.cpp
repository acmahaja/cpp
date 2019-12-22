#include <iostream>

bool f(void);

int main()
{
    //test commit
    bool ok = true;
    if(!f())
    {
        ok = false;
        std::cout << ok <<  
        goto end;
    }
    end:
        return 1;
}

bool f()
{
    return true;
}