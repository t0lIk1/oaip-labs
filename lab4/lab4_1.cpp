// 2.1
#include <iostream>

using namespace std;

int main(){

    int a = 1000;
    long b = 0.0001;
    int c = ((a+b)^3-a^3+3*a^2*b)/(3*a*b^2+b^3);
    cout << "Значение c равно: " << c << endl;
    return 0;
 }
