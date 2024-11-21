#include <iostream>
#include <ostream>

// Inheritance = a class can have attribute and method from another class
// children inherit from a parent class
// help to use a similar code  found multiple classes


class Animals {
public:
    bool alive = true;
    void eat() {
        std::cout << "do is alive" << std::endl;
    }
};

class Dog : public Animals {
    public:
    void bark() {
        std::cout << "dog is bark" << std::endl;
    }

};

class Cat : public Animals {
public:
    void miao() {
        std::cout << "Cat is miaaaw" << std::endl;
    }

};



int main() {
    Dog dog;
    Cat cat;

    std::cout << dog.alive << std::endl;// we expect having the result true
    dog.eat();
    dog.bark();
    std::cout << cat.alive << std::endl;
    cat.miao();
    return 0;
}