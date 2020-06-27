#include<iostream>
using namespace std;
int main()
{
    int s=1, n, k=0;
    cin >> n;
    while(s<n)
    {
        k++;
        s *= 3;
    }cout << k;
}
