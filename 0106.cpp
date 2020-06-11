#include<iostream>
using namespace std;
int main()
{
    int n, i, t[100], bir = 0, nol = 0;
    cin >> n;

    for (i = 0;i < n; i ++)
        cin >> t[i];

    for (i = 0;i < n; i ++)
        bir += t[i];

    nol = n - bir;

    if (bir < nol) cout << bir;
    else cout << nol;
}
