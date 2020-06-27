#include <bits/stdc++.h>
using namespace std;
int ishora(x)
{
    if (x>0) return 1;
    if (x==0) return 0;
    if (x<0) return -1;
}
int main()
{
    float a, b;
    cin >> a >> b;
    cout << ishora(a)+ishora(b);
}
