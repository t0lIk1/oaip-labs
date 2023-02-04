// №1
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        {
            cout << "x и y в первой четверти";
        }
            if (x < 0 && y < 0)
             {
            cout << "x и y в третьей четверти";
             }
                else
                {
                    cout << "x и y где-то в другом месте";
                }

    return 0;
}
