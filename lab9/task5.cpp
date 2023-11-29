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

    return 0;
}