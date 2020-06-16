#include<iostream>
using namespace std;
int main()
{
    int m,n,k,s;
    cin >> m >> n >> k;
    int a = (n-1) % k;
    int b = k - a;
    if (a * 200 > b * 100 && n+b+1 < m) cout << b * 100;
        else cout << a * 200;
}
