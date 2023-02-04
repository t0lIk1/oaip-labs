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
