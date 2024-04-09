#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>


int main()
{
    ComplexNumberLibrary::ComplexNumber c1(1,2);
    std::cout <<"numero complesso c1: "<< c1 << std::endl;

    ComplexNumberLibrary::ComplexNumber c2(1,1);
    std::cout <<"numero complesso c2: "<< c2 << std::endl;

    ComplexNumberLibrary::ComplexNumber sum = c1 + c2;
    std::cout << "somma c1 +c2: " << sum << std::endl;

    bool t = c1 == c2;
    std::cout << t << std::endl;

    ComplexNumberLibrary::ComplexNumber coniugato = conjugate(c1);
    std::cout << "coniugato: " << coniugato << std::endl;


    return 0;
}
