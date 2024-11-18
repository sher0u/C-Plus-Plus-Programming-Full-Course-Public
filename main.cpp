#include <iostream>

//An enum is a special type
//that represents a group of constants (unchangeable values).

using namespace std;
enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
  };

int main() {
    enum Level myVar = MEDIUM;
    cout << myVar;  // Now outputs 50
    return 0;
}