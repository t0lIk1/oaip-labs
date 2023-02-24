#include <iostream>

using namespace std;

int main(void) {

    int m[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) m[i][j] = 1;
    }
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            m[i][j] = m[i - 1][j] + m[i][j - 1];
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << '\t' << m[i][j];
        }
        cout << endl;
    }
    return 0;
}