#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>

std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
    if (c.iPart >= 0 )
        os << c.rPart << "+" << c.iPart << "i";
    else
        os << c.rPart << c.iPart << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) {
    double rPart = c1.rPart + c2.rPart;
    double iPart = c1.iPart + c2.iPart;
    return ComplexNumber(rPart, iPart);
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2) {
    if (abs(c1.rPart - c2.rPart)<=std::numeric_limits<double>::epsilon() && abs(c1.iPart - c2.iPart)<=std::numeric_limits<double>::epsilon())
        return true;
    return false;
}

ComplexNumber getConjugate(const ComplexNumber& c1) {
    double rPart = c1.rPart;
    double iPart = -1*c1.iPart;
    return ComplexNumber(rPart, iPart);
}
