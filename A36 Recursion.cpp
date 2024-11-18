#include <iostream>

// Recursion of the function

void walk(int step) {
    if(step > 0) {
        std::cout << 101 -step << "  You took a step" << std::endl;
        walk(step - 1);
    }
}

int main(){

    walk(100);
    return 0;
}
