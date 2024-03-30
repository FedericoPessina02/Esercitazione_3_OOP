#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    ComplexNumber a(2, 3);
    ComplexNumber b(2.54, 1.536);
    ComplexNumber c(2.54, -5.536);
    std::cout << a+b << std::endl;
    std::cout << a+c << std::endl;
    return 0;
}
