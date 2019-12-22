#include <iostream>

bool f(void);

int main()
{
    
    bool ok = false;
        std::cout << "ok = " << ok << "\n";  

    if(f())
    {
        ok = true;
        std::cout << "ok = " << ok << "\n";  
        goto end;
    }
     end:
        return 1;

}

bool f()
{
    return true;
}