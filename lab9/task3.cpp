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
	
    return 0;
}