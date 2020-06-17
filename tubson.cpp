#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, i,l=0, n;
    cin >> n;
    for(a=2;a<=n;a++)
    {
    for (i=2;i<=sqrt(a);i++)
        if ( a % i == 0) {l=1;break;}
    if ( l == 0) cout << a << " ";
    l = 0;
    }
}
