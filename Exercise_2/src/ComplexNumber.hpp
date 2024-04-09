
#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

#include <iostream>
#include <cmath>

namespace ComplexNumberLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber() = default;

    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }
};

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);

bool operator==(const ComplexNumber& a, const ComplexNumber& b);

std::ostream& operator << (std::ostream& os, const ComplexNumber& c);

ComplexNumber conjugate(const ComplexNumber& c);

}


#endif /* COMPLEXNUMBER_HPP */
