#include <iostream>
using namespace std;

int task1(){
    int c0, steps = 0;

    cout << "Enter c0: ";
    cin >> c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        } else {
            c0 = 3 * c0 + 1;
        }

        cout << c0 << endl;

        steps++;
    }

    cout << "steps = " << steps;
    return 0;
}

int task2(){
    double pi4 = 0.0;
    long step;
    int a = 1;

    cout << "Number of stps? ";
    cin >> step;

    for (double i = 1; i < step; i = i + 2) {
        if (a % 2 != 0) {
            pi4 = pi4 + (1 / i);
        } else if (a % 2 == 0) {
            pi4 = pi4 - (1 / i);
        }
        a++;
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;

    return 0;
}

int task3(){
    int num;

    cout << "Enter num: ";
    cin >> num;

    while (true) {
        if (num <= 20) {
            cout << '+';
            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;

            for (int i = 0; i < num - 2; i++) {
                cout << '|';
                for (int j = 0; j < num - 2; j++)
                    cout << ' ';
                cout << '|' << endl;
            }

            cout << '+';

            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;
            return 0;
        } else {
            cout << "Wrong num, please enter num less then 20"<< endl;
            cin >> num;
        }
    }
}

int main() {
    task1();
    cout << "\nNext...\n";
    task2();
    cout << "\nNext...\n";
    task3();
}