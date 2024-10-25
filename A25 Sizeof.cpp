#include <iostream>

//Size of determine size in bytes of a variable, data type, class,object, etc

int main() {
    double gpa=2.5;
    std::string name="kader";
    char grade ='f';
    bool virgin= true;

    std::cout << sizeof(gpa) << std::endl;
    std::cout << sizeof(name) << std::endl;
    std::cout << sizeof(grade) << std::endl;
    std::cout <<sizeof(virgin) << std::endl;
    //HOW TO KNOW HOW MANY ELEMENT IN ARRAY USING SIZE OF
    char array[]={'A','B','C','D','E','R'};
    std::cout <<"elemant " << sizeof(array)/sizeof(array[0]) << std::endl;

    return 0;
}
