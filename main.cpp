#include <iostream>

// a pointer is a vraible that contain the address of the other variable .
//& adderess of the operator
//* deferance of operator


int main() {
    // the main task in this lesson is creat a
    // pointer that point to an integer to a string and for array

    std::string name="Kader";
    int age=18;
    std::string AAray[4]={"kader","julia","vitali","vika"};

    std::string *Name=&name;
    std::string *table=AAray;
    int *page=&age;

    std::cout<<*table<<std::endl;
    std::cout<<*page<<std::endl;
    std::cout<<*Name<<std::endl;


// Null value = a special value that mean something
// has no value when a pointer is holding a null value

    if(page == nullptr) {
        std::cout<<"Pointer wrong"<<std::endl;
        return 1;
    }


    return 0;
}
