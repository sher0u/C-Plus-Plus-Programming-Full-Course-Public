#include <iostream>


    using namespace std;
    struct student{
    int age;
    string name;
 }Mystructure;



int main(){
   // Access Structure Members
    Mystructure.age = 18;
    Mystructure.name = "John";

    cout << Mystructure.age << " " << Mystructure.name << endl;
    return 0;
}
