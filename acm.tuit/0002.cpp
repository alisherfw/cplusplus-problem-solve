#include <iostream>
using namespace std;
int main()
{
    int k, a, b, c, s=0;
    cin >> a >> b >> c;
    if ((a+b+c) % 3 != 0) cout << "IMPOSSIBLE";
     else {
        k=(a+b+c)/3;
        if (a > k) s=s+a-k;
        if (b > k) s=s+b-k;
        if (c > k) s=s+c-k;
        cout << s;
     }
}
