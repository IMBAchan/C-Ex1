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

    // 4. Кількість елементів масиву, більших за A:
    int A, numMoreThanA = 0;
    cout << endl << "Enter A: ";
    cin >> A;

    for (int i = 0; i < arraySize; ++i) {
        if (A < numbers[i]) {
            cout << numbers[i] << ' ';
            numMoreThanA++;
        }
    }
    cout << endl << "Number of elements larger than A: " << numMoreThanA;

    return 0;
}