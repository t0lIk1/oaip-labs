#include <iostream>

using namespace std;

/*� ������� 20 �������.�������,��������� ��������(� ��������),� ������,��������� � ������ ������(� ���������),�������� � ���� ��������.���������� ������� ����������� ������� �� ������� ������ � �� ������� � �����.
������ ������ ����� ���������:
2)� �������������� ��������������� �������.*/

int main() {

    double  arr_pl[20];
    double  arr_har[20];
    double arr_med[20];
    double  x = 0, z = 0, sum = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Enter harvest " << i + 1 << " area: ";
        cin >> arr_har[i];
        cout << "Enter planted " << i + 1 << " area: ";
        cin >> arr_pl[i];
        x = (arr_har[i] * arr_pl[i]) / arr_pl[i];
        cout << "Harvest area: " << x << endl;
        z += arr_pl[i];
        arr_med[i] = arr_har[i] * arr_pl[i];
    }
    for (int i = 0; i < 20; i++) {
        sum += arr_med[i];
    }
    cout << "Medium harverst areas: " << sum / z;

}

