
/*
Рассмотрим последовательность, образованную дробями: 1/1,
2/1, 3/2, … , в которой числитель (знаменатель) следующего
члена последовательности получается сложением числителей
(знаменателей) двух предыдущих членов. Числители двух
первых дробей равны 1 и 2, знаменатели 1 и 1.
a. Найти k-ый член этой последовательности
b. Получить первые n членов этой последовательности
c. Верно ли, что сумма первых n членов этой
последовательности больше числа А?
*/

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




