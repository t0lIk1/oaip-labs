#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*
Пусть:
a[0]=cos (1) ; a[1]=-sin (1) ;
a[k]=2*a[k-1]-a[k-2] , k=2,3,....
В последовательности  a[0],a[1],...,a[n] определить число со-
седств: двух отрицательных чисел;
*/
int main() {
    int k, pairsNum;
    double a0, a1, next;
    a0 = cos(1);
    a1 = -sin(1);
    cout << "enter the k-th element sequences: ";
    cin >> k;
    cout << "a[0] = " << a0 << endl;
    cout << "a[1] = " << a1 << endl;
    for (int i = 2; i <= k; i++) {
        next = 2 * a1  - a0;
        a0 = a1;
        a1 = next;
        printf ( "a[%d] = %f\n", i, next) ;
        if (a1 < 0 && a0 < 0) {
            pairsNum++;
        }
    }
    cout << "pairsNum= " << pairsNum;
    return 0;
}






