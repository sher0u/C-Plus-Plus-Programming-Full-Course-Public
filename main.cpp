#include <iostream>

//Constructor
class student {
public:
    std::string name;
    int age;
    student(std::string name, int age) {
    this->name = name;
        this->age = age;
    }

};

int main() {

    student student1("Spongbob",25);
    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    return 0;
}