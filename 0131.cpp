#include <iostream>
using namespace std;
int main()
{
    int a, n, i, s, maxx=0, l=-1;
    cin >> n;
    for (i=0;i<n;i++)
    {
    cin >> a >> s;
    if (s==1 && a>maxx){ maxx = a;l=i+1;}
    }
    cout << l;
}
