#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H
#include <iostream>

struct ComplexNumber {
    double rPart;
    double iPart;

    ComplexNumber() = default;
    ComplexNumber(double a, double b) {
        rPart = a;
        iPart = b;
    }
};

std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);

ComplexNumber getConjugate(const ComplexNumber& c1);

#endif
