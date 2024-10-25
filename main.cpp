#include <iostream>

//Local variable = declared inside the function or the block
//Global Variable = declared outside all the function
//Advice avoid using global variable
//in printing we start printing the local and after the global variable

int Number=3; //global variable
void printer() {
    std::cout<<Number<<std::endl; //using global variable
}

int main() {
    printer();
    std::cout<<Number<<std::endl;
    int Number=5;//local variable
    std::cout<<Number<<std::endl;

    return 0;
}


