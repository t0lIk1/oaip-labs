// 2.1
#include <iostream>  
using namespace std;
int main()
 {
    int a = 1000;
    long b = 0.0001;
    int c = ((a+b)^3-a^3+3*a^2*b)/(3*a*b^2+b^3);
    cout << "Значение c равно: " << c << endl;
    return 0;
 }
// 2.2
#include <math.h>
#include <iostream>
using namespace std;
int main() {
        int n;
        int m;
        cin >> n >> m;
        cout << "n---m=" << (m-- - n) << endl;
        cout << "m--<n=" << (m-- < n) << endl;
        cout << "n++>m=" << (m++ > n) << endl;
        return 0;
    }
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
