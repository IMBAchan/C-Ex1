#include <iostream>
#include <cmath>

using namespace std;

int task6(){
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;
    
    answer = (value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > -2) ||
             (value - 1 > 1 && value / 2 < 10) || (value == 111);
    
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}

int task7(){
    float var1, var2, var3, var4, var5;
    
    var1 = 2.3;
    var2 = 2.3;
    var3 = 2.123456;
    var4 = 2.123456;
    var5 = 2.123456;

    printf("%.1f\n", var1);
    printf("%.2f\n", var2);
    printf("%f\n", var3);
    printf("%.2f\n", var4);
    printf("%.0f\n", var5);
    return 0;
}

int task8(){
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    float epsilon = 0.000001;
    if (fabs(a - b) <= epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }
    return 0;
}

int task9(){
    int a,b,c,d;
    cout << "Enter 4 numbers";
    cin >> a >> b >> c >> d;
    if (a>0 && a<256 && b>0 && b<256 && c>0 && c<256 && d>0 && d<256)
        cout << a << "." << b << "." << c << "." << d;
    else
        cout << "Numbers must be in the range from 1 to 255";
    return 0;
}
int main(void){
    task6();
    cout << "\nNext...\n";
    task7();
    cout << "\nNext...\n";
    task8();
    cout << "\nNext...\n";
    task9();
    return 0;
}
