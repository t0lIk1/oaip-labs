// №2
#include <iostream>

using namespace std;

int main()
{
    int x, y, c;
    cin >> x >> y;
         if ( x > y )
         {
         c = x;
         x = y;
         y = c;
         }
    cout << "x=" << x;
    cout << ",y=" << y;
    return 0;
}
