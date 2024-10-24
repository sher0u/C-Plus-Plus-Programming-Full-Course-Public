#include <iostream>

//Random number generator


int main() {

    srand(time(NULL));

    int Num=rand()%6; // what after %is the range ;
    std::cout << Num << std::endl;
    return 0;
}
