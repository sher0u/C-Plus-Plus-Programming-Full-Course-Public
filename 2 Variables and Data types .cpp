#include <iostream>

int main() {
    // Integer
    int users;
    users = 20;
    std::cout << users <<'\n';

    //double
    double mark;
    mark =7.6;
    std::cout <<mark << '\n';

    // single charchter
    char Grade;
    Grade = 'A';

    // Boolean
    bool active;
    active = true;
    std::cout << active << '\n';

    //string
    std::string Name ="Kader";
    std::cout << "My name is " <<Name << '\n';

    // All data types in one example

    std::cout << "My name is " << Name << " My age " << users << " My grade with numbers " << mark << " in the american "<< Grade << " and My status" << active <<'\n';

    return 0;
}
