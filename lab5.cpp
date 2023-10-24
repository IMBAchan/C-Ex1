#include <iostream>
#include <cmath>

using namespace std;

int task1(){
    int x, y;
    for (int i = 0; i < 5; i++){
        cout << "Enter x: ";
        cin >> x;
        y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "y = " << y << endl;
    }
    return 0;
}

int task2(){
    unsigned long int add = 1; 

    for (int i = 2; i <= 20; i += 2) {
        add *= i; 
    }

    cout << "Product of even numbers from 1 to 20: " << add << endl;
    return 0;
}

int task3(){
    double a, b, h;
    cout << "Enter the start of the interval a: ";
    cin >> a;
    cout << "Enter the end of the interval b: ";
    cin >> b;
    cout << "Enter the step size h: ";
    cin >> h;

    cout << "-------------------\n";
    cout << ": X       : Y       :\n";
    cout << "-------------------\n";

    for (double x = a; x <= b; x += h) {
        if (x - 7 >= 0) {
            double y = 8 + sqrt(x - 7) / (7 + 5);
            cout << ": " << x << " : " << y << " :\n";
            cout << "-------------------\n";
        } else {
            cout << "Error: x does not belong to the domain\n";
            break;
        }
    }

    return 0;
}

int main(void){
    task1();
    cout << "\nNext...\n";
    task2();
    cout << "\nNext...\n";
    task3();
    return 0;
}
