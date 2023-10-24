// Example program
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    double a = 3;
    double b = 0.521;
    double result1;
    double result2;
    double result3;
    double result4;
    
    double upperx = 173; // b/a
    
    result4 = 1 - cbrt(cos(upperx * 3.14));
    result3 = 0.127 * pow(2.718, upperx);
    result2 = pow((result3 / result4), 2);
    result1 = cbrt(result2);    
    std::cout << result1;
}
