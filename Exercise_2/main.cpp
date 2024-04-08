#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"

int main()
{
    ComplexNumber a(2, 0);
    ComplexNumber b(2, 1e-16);
    ComplexNumber c(2.54, -5.536);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;
    std::cout << a+b << std::endl;
    std::cout << a+c << std::endl;
    std::cout << std::endl;
    if (a==b) {
        std::cout << "a is equal to b" << std::endl;
    } else {
        std::cout << "a is not equal to b" << std::endl;
    }
    std::cout << std::endl;
    std::cout << getConjugate(c) << std::endl;
    return 0;
}
