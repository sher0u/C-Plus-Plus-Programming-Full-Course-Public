#include <iostream>

//Dynamic memory that is allocated in the memory after the program is already is running
//we can use when we don't know how much memory we will need it ;


int main() {
    // the task is to make a dynamic array;
    char *Pgrade=nullptr;
    int size;

    std::cout<<"Please enter the size of the array: ";
    std::cin>>size;

    Pgrade = new char[size];

    for(int i=0;i<size;i++) {
        std::cin>>Pgrade[i];
    }
    for(int i=0;i<size;i++) {
        std::cout<<Pgrade[i]<<std::endl;
    }
    delete[] Pgrade;


    return 0;
}
