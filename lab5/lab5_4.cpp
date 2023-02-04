// №4
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "введите число от 0 до 9" << endl;
    cin >> x ;
    if (x >= 0 && x <= 9)
        {
        switch (x)
            {
        case 0:
        cout << "ноль";break;
        case 1:
        cout << "один";break;
        case 2:
        cout << "два";break;
        case 3:
        cout << "три";break;
        case 4:
        cout << "четыре";break;
        case 5:
        cout << "пять";break;
        case 6:
        cout << "шесть";break;
        case 7:
        cout << "семь";break;
        case 8:
        cout << "восем";break;
        case 9:
        cout << "девять";break;
            }
        }
            else
            {
                cout << "неправильное число попробуйте еще раз";
            }

    return 0;
}
