#include <iostream>

//Sort An array using the bubble sort;

void sort(int array[], int size);

int main() {
    int array[5] = {5, 1, 3, 4, 2};
    int size;
    size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int elemant : array) {
        std::cout << elemant << " ";
    }

    return 0;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
