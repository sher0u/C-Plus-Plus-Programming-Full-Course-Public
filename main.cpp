#include <iomanip>
#include <iostream>

//Type conversion = conversion of a value of one data type  to another data type

int main() {

    int a = 3.14; // implicit conversion which mean the normal conversion;
    std::cout << a << std::endl;
    double b = (int)3.14; // Explicit conversion
    std::cout << b << std::endl;
    // small practise using the type conversion

    int correct = 8;
    int total= 10;
    double result = correct /(double)total*100;
    std::cout << result <<"%" << std::endl;
    return 0;
}
