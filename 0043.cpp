#include<iostream>
using namespace std;
int main()
{
    string a;
    int i, n , l = 0, max = 0;
    cin >> a;
    n = a.size();
    for (i=0;i<n;i++)
    if (a[i]=='0') l++; else {if(l > max) max=l;l=0;}
    if(l > max) max=l;
    cout << max;
}
