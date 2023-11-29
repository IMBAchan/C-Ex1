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

    cout << "3." << endl;
    // 3. Зміна місцями найбільшого і найменшого елементів масиву:
    int maxNum = INT_MIN;
    int maxIndex = 0;
    int minNum = INT_MAX;
    int minIndex = 0;

    for (int i = 0; i < arraySize; ++i) {
        if (maxNum < numbers[i]) {
            maxNum = numbers[i];
            maxIndex = i;
        }
        if (minNum > numbers[i]) {
            minNum = numbers[i];
            minIndex = i;
        }
    }

    cout << endl << "max num: " << maxNum << endl << "min num: " << minNum << endl;
    numbers[maxIndex] = minNum;
    numbers[minIndex] = maxNum;

    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << ' ';
    }
    
    cout << "4." << endl;
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

    cout << "5." << endl;
    // 5. Другий за величиною елемент масиву:
    int secondMaxNum = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] != maxNum) {
            if (secondMaxNum < numbers[i]) {
                secondMaxNum = numbers[i];
            }
        }
    }
    cout << endl << "Second max num: " << secondMaxNum << endl;

    cout << "6." << endl;
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
