#include "vector/vector.h"

#include <iostream>

int main() {
    Vector<double> A{3,5};
    Vector<double> B{1,2};
    std::cout <<" Vector A = " << A << ", " << "Vector B = " << B << std::endl;
    std::cout << "Dot Product (A . B) = " << dot(A, B) << std::endl;
    std::cout << "Cross Product (A x B) = " << A * B << std::endl;


}