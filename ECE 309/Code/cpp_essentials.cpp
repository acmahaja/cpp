#include <iostream>

int main()
{
    int x = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> x; // cin knows that a decimal formatted integer is desired
                   // and looks at the input to find one
    std::cout << "The value of x = " << x << "\n";
    return 0;
}
