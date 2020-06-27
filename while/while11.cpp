#include<iostream>
using namespace std;
int main()
{
    int n, l=0, s=0, k=0;
    cin >> n;
    while(s<n)
    {
        k++;
        s += k;
    }cout << k << " " << s;
}
