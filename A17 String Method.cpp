#include <iostream>

// String Method
// first method is name.length() give you the length of this character .
// second method name.empty give a bool answer .
// third method is name.clear().

//-- You can find the rest of the method in https://www.geeksforgeeks.org/cpp-string-functions/

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    int length = name.length(); // length of the string
    std::cout << length << std::endl;

    name.append("@gmail.com"); // add another string
    std::cout << name << std::endl;

    std::cout <<name.at(0) << std::endl; // print the character using the place
    name.insert(0, "]");//insert a character;

    name.clear(); // clear
    std::cout << name << std::endl;

    return 0;
}
