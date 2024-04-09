
#include "ComplexNumber.hpp"
#include <iostream>

namespace ComplexNumberLibrary{

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b)
{
    return ComplexNumber(a.real + b.real, a.imag + b.imag);
}

bool operator==(const ComplexNumber& a, const ComplexNumber& b)
{
    //return a.real == b.real && a.imag == b.imag; // 1 vero, 0 falso
    double tolerance = 0.0001;
    return (fabs(a.real - b.real) < tolerance) && (fabs(a.imag - b.imag) < tolerance);
}


std::ostream& operator << (std::ostream& os, const ComplexNumber& c)
{
    if (c.imag >= 0)
        os << c.real << "+" << c.imag << "i";
    else
        os << c.real << c.imag << "i";
    return os;

}

ComplexNumber conjugate(const ComplexNumber& c)
{
    return ComplexNumber(c.real, -c.imag);
}

}
