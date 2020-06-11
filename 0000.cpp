#include<iostream>
using namespace std;
int main()
{
    int a, b, n, l, k;
    cin >> n >> a >> b;
    k=a-b;
    if (k<0) k=-k;
    k--;
    l=n-k-2;
    if (l<k) cout << l;
    else cout << k;
}
