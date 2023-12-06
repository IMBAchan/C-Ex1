#include <iostream>

using namespace std;

int main() {
    constexpr int arraySize = 12;
    
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