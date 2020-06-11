#include <iostream>
using namespace std;
int main()
{
    int a[1000],n, i, k, c, d, j;
    cin >> n;
    for (i=1;i<=n;i++)cin >> a[i];
    cin >> k;for (i=0;i<k;i++)
    {
        cin >> c >> d;
        for (j=c;j<=d;j++)
            cout << a[j] << " ";
        cout << endl;}
}
