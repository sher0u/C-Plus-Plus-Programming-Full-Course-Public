#include <iostream>

// Array in C++
//Array is data structure that can hold multiple values this value can be accesed by index number

int main() {
    //First method of declaration of an array
    std::string Freind[]={"tema","dima","danil","andrey","vitali "};
    std::cout << Freind[0] << std::endl;
    std::cout << Freind[1] << std::endl;

    //You can change any element in the array;
    //Second method of declaring an array

    std::string car[2];
    std::cin >> car[0] >> car[1];
    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;


    return 0;
}