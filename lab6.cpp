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
//задание 4

#include <iostream>
using namespace std;
int main()
{
    int cb,ca,cc,k;
    int zb,za,zc;
    int mi,mx,my;
    float n;
    mi=1,mx=2,my=3;
    cout << "Enter the k-th term of the sequence: ";
    cin >> k;
    ca=1;
    cb=2;
    za=1;
    zb=1;
    int i=k;
    int A,cn=ca,zn=za;
    cout <<  "Sequence: "  << ca << "/" << za << ", " ;
    cout << cb << "/" << zb  ;
    for (;i>=0;i--)
    {
        if (k==mi)
        {
            cout << "   k="<< ca << "/" << za;
            break;
        }
        if (k==mx)
        {
            cout <<"    k="<< cb << "/" << zb;
            break;
        }
        cc=ca+cb;
        zc=za+zb;
        zn +=zc ;
        cn +=cc ;
        cout << ", "<< cc << "/" << zc ;
        if (k==my)
        {
            cout << "   k="<< cc << "/" << zc;
            break;
        }
        // числитель
        ca=cb;
        cb=cc;
        // знаменатель
        za=zb;
        zb=zc;
        // число последовательности
        mi++;
        mx++;
        my++;
    }
    cout << "\n" << "enter the number A: ";
    cin >> A;
    zn +=zb;
    cn +=cb;
    n=cn/zn;
    cout << "compare n and A: ";
    if (A > n)
    {
            cout << "The number A is greater than the sum of the first n members of this sequence.";
    }
    else if (A = n)
    {
            cout << "A and n are equal to.";
    }
    else
    {
            cout << "The sum of the first n members of this sequence is greater than the number A.";

    }
}



