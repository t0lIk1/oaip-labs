//заданиеи 3
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h, a, n, g;
    cin >> a ;
    cout << "a=" << a;

    cin >> n;
    cout << " n=" << n;
  
    h = pow((a + n), 2);
    n = n / 2;
        n = n / 2;
       
        for (n  ;  n != 0 && n >=0 ; n = n - 2)
        {
            cin >> a;
            g = pow((h + a), 2);
            cout << " g=" << g;
            
        }
    
}
