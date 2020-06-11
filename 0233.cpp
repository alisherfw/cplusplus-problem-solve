#include <iostream>
using namespace std;
int main()
{
    int a[30000], n, minn = 30001, maxx = -minn, i, j, k;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(minn > a[i]) minn = a[i];
        if(maxx < a[i]) maxx = a[i];
    }
    cout << minn << " " << maxx;
}
