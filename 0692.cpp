#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n, s=0, i;
    cin >> n;
    for (i=0;s<=n;i++)
    {
        s=pow(2, i);
        if (s==n) {cout << "YES"; return 0;
        }
}cout << "NO";
}
