#include <iostream>

// break and continue

int main() {

    // 1- break
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            break;
        }
        std::cout << i << std::endl;
    }
    //2- continue

    for (int j = 1; j <= 10; j++) {
        if (j == 2) {
            continue;
        }
        std::cout << j << std::endl;
    }

    return 0;
}
