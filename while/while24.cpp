#include<iostream>
using namespace std;
int main()
{
    int a0=1,a1=1,a2, n, i=1;
    cin >> n;
    cout << a0 << " " << a1 << " ";
    while(i < n)
    {
        i ++;
        a2=a0+a1;
        cout << a2 << " ";
        a0=a1;a1=a2;
    }
}
