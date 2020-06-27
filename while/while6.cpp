#include <iostream>
using namespace std;
int main()
{
    int n, i, s=1;
    cin >> n;
    if (n%2==0)i=0;else i=1;
    while (n>i)
    {
        i+=2;
        s*=i;
    }
    cout << s;
}
