#include<iostream>
using namespace std;
int main()
{
    int n, m, s=0;
    cin >> n >> m;
    while(n>=m)
    {
        n -= m;
        s++;
    }cout << s << " " << n;
}
