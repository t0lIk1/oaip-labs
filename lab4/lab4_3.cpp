// 3.1
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y,f;
    cin >> x >> y;
    f=((tan(x)+cbrt(pow(x,2)+pow(y,2)))/(1.3*(x+y+2))*log10(fabs(x)+y)*2.3*pow(10,-5));
    cout << f;
    return 0;
}
