#include <iostream>

void rintinfo(const std::string name, const int age);

int main() {
   //Const Parameter a parameter read only//

    std::string name="kader";
    int age=15;

    rintinfo(name, age);


    return 0;
}
void rintinfo(const std::string name, const int age) {
    name ="";// we cant modify in it ;l
    age =0; // we cant modify in it ;
    std::cout << name << std::endl;
    std::cout << age << std::endl;

}
