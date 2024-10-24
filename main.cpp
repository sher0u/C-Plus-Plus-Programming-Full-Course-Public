#include <iostream>
#include <ctime>

//Small Project Random event generator


int main() {
    srand(time(0));
    int randomNumber = rand() % 5 +1;

    switch (randomNumber) {
        case 1:std::cout<<"win 1 dollar";
        break;
        case 2:std::cout<<"win 2 dollar";
        break;
        case 3:std::cout<<"win 5 dollar";
        break;
        case 4:std::cout<<"win 6 dollar";
        break;
        case 5:std::cout<<"win 10 dollar";
        break;
    }
    return 0;
}
