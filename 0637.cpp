#include <iostream>
using namespace std;
int main()
{
    long a1, b1, c1, a2, b2, c2, n1, n2, k1, k2, l, j1, j2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    n1=a1/100*b1;
    n2=a2/100*b2;
    k1=a1-n1;
    k2=a2-n2;
    if (k1>k2) l=k2;
        else l=k1;
    j1=(a1-l)*c1;
    j2=(a2-l)*c2;
    cout << j1 + j2;
}
