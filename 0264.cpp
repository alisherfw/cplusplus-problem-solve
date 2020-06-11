#include <iostream>
using namespace std;
int main()
{
    int a[100], n, max=0, i, k=0;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i]>0) k++;
        else {if (max<k)max=k;k=0;}
    }
    if (max<k)max=k;
    cout << max;
}
