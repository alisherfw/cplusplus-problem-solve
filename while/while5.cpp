#include<iostream>
using namespace std;
int main()
{
    int n, i, k=0, s=1;
    cin >> n;
    while(n!=s)
    {
        s *= 2;k++;
    }
    cout << k;
}
