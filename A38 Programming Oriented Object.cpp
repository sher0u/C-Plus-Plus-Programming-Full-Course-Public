#include <iostream>

//POO
class human {
public:
    std::string name;
    int age;
    std::string job;

    void eat() {
        std::cout << "I am EATING" << std::endl;
    }

    void sleep() {
        std::cout << "I am SAYING" << std::endl;
    }

};

int main() {
    human h1;
    h1.name = "kader";
    h1.age = 18;
    h1.job = "painter";

    std::cout << h1.name << " " << h1.age << " " << h1.job << std::endl;
    h1.eat();
    h1.sleep();
    return 0;
}
