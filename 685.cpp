#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    if (a1>a2) swap (a1,a2);
    if (a1>a3) swap (a1,a3);
    if (a2>a3) swap (a2,a3);
    if (b1>b2) swap (b1,b2);
    if (b1>b3) swap (b1,b3);
    if (b2>b3) swap (b2,b3);
    cout << a1*b1+a2*b2+a3*b3;
}
