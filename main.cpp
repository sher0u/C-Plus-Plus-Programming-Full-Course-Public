#include <iostream>

int main() {
    //Memory address = is a location where the data is stored
    //a memory address can be addressed with &

    std::string name ="Julia";
    int age = 18;
    bool student = true;

    std::cout <<&name << std::endl;
    std::cout <<&age << std::endl;
    std::cout <<&student << std::endl;

    return 0;
}

