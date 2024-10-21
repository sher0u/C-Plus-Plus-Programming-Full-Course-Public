#include <iomanip>
#include <cmath>
#include <iostream>

// Small project how to calculate hypotheses:

int main() {

    double a;
    double b;
    double c=0;

    std::cout << "we know that the hypotheses we can calculate it using the fornule sqrt(a^2+b^2)"<<std::endl;
    std::cout << "Enter the first A: ";
    std::cin >> a;
    std::cout << "Enter the second B: ";
    std::cin >> b;

    c = sqrt(a*a+b*b);
    std::cout << "The result is :" << c << std::endl;
    
    return 0;
}
