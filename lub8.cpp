#include <iostream>

using namespace std;

int main() {
    
    //task1
    int arraySize = 12;
    int arr[arraySize];

    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        arr[i] = rand() % 10 - 6;
        cout << arr[i] << " ";
    }

    // Сортування arr за зростанням (bubble sort)
    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (arr[i] < arr[c]) {
                int temp = arr[i];
                arr[i] = arr[c];
                arr[c] = temp;
            }
        }
    }

    cout << endl << "Increase:";

    for (int i = 0; i < arraySize; ++i) {
        cout << arr[i] << ' ';
    }

    // Сортування arr за спаданням (bubble sort)
    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (arr[i] > arr[c]) {
                int temp = arr[i];
                arr[i] = arr[c];
                arr[c] = temp;
            }
        }
    }

    cout << endl << "Decrease:";

    for (int i = 0; i < arraySize; ++i) {
        cout << arr[i] << ' ';
    }

    int arr2[arraySize];
    cout << endl;

    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        arr2[i] = rand() % 10 - 6;
        cout << arr2[i] << " ";
    }

    int maxNum = 0;
    int maxIndex = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (maxNum < arr2[i]) {
            maxNum = arr2[i];
            maxIndex = i;
        }
    }

    //task2
    for (int i = 0; i < maxIndex; ++i) {
        if (arr2[i] < 0) {
            arr2[i] = 0;
        }
    }

    cout << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << arr2[i] << ' ';
    }
}
