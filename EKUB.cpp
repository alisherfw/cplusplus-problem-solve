#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "N = "; cin >> n;
    cout << "M = "; cin >> m;
    while(n != m)
    {
        if(n > m) n -= m; // n = n - m;
             else m -= n;      // m = m - n;
    }
    cout << m;
}
