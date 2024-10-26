#include <iostream>

//fill() = Fills a range of elemant with a specifed value
// fill (begin , end , value)



int main() {
    std::string Food[100];

    fill(Food,Food+100/50,"pizza");
    fill(Food+50,Food+100,"Humburger");

    for (std::string food: Food) {
    std::cout << food << std::endl;
    }
    return 0;
}

