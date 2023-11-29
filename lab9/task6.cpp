#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int numbers[arraySize];
    srand(time(NULL));
    
    for (int i = 0; i < arraySize; i++) {
        numbers[i] = rand() % 10;
        cout << numbers[i] << " ";
    }

    // 6. Номер першого нульового елемента:
    int firstZero = -1;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == 0) {
            firstZero = i;
            break;
        }
    }
    if (firstZero == -1) {
        cout << "There is no 0 element";
    } else {
        cout << "Index of the first 0 element: " << firstZero;
    }

    return 0;
}
