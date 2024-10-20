#include <iomanip>
#include <iostream>

// Type def is using to identify for an existing type helps with readability and reduce type
typedef std::string text_type; //using string

// but nowdays you can use using better than type def
using number_type=int;

int main() {

    text_type Name = "Kader";
    number_type age = 18;
    std::cout << Name << std::endl;
    std::cout << age<<std::endl;
    return 0;
}
