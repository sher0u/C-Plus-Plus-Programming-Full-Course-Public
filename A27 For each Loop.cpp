#include <iostream>

// For each Loop = loop that eases the traversal over an iterable data set

int main() {
    int Numbers[5]={1,2,3,4,5};
    for (int i : Numbers) {
        std::cout << i << std::endl;
    }

    return 0;
}

