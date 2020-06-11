#include <iostream>
using namespace std;
int main()
{
    int a[1000], n, maxx=0, i;
    cin >> n;
    for (i=0;i<n;i++)
        cin >> a[i];
    a[n]=a[0];
    a[n+1]=a[1];
    for (i=0;i<n;i++)
    if (a[i]+a[i+1]+a[i+2]>maxx) maxx=a[i]+a[i+1]+a[i+2];
    cout << maxx;
}
