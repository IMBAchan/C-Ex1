#include <iostream>
#include <cmath>

using namespace std;

double calcY(double x) {
    if (x >= 0) {
        return exp(-x) * tan(1.0 / (x * x + 8.2));
    } else {
        return x * (0.32 * x + 2.5) / (x * x + 3);
    }
}

int main {
    double x;
    cout << "Enter the value of X: ";
    cin >> x;

    double y = calcY(x);
    cout << "Y value: " << y << endl;

    return 0;
}