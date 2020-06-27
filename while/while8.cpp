#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    cin >> n;
    while(k*k<n)
    {
        k++;
    }
    cout << k-1;
}

