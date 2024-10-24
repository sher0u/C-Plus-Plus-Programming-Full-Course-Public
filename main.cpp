#include <iostream>

//Function = a block of reusable code

void happy_birthday() {
    std::cout << "Happy birthday" << std::endl;
    std::cout << "Happy birthday" << std::endl;
    std::cout << "Happy birthday" << std::endl;
}

int age(int A) { // function to calculate your age using return
    int b=2024-A;
    return b;
}
int AgeUsingTheargument(int A,int& B) { //function using the references
    B=2024-A;
    return 0;
}
void add(int a, int b)
{
    std::cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    std::cout << std::endl << "sum = " << (a + b);
}

int main() {
    int Year=2003;
    int result;
    result = age(Year);
    happy_birthday();
    std::cout << result << std::endl;

    int resultArgument;
    AgeUsingTheargument(Year,resultArgument);
    std::cout << resultArgument << std::endl;

//Overloaded Function using the same name but different argument
    add(10, 2);
    add(5.3, 6.2);


    return 0;
}


