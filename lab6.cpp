#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter a natural number N:";
    cin >> N;

    int product = 1;

    while (N > 0) {
        int digit = N % 10;

        if (digit != 7) {
            product *= digit;
        }

        N /= 10;
    }

    cout << "The product of numbers that are NOT equal to 7: " << product << endl;

    return 0;
}
