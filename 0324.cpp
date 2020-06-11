#include <iostream>
using namespace std;
int main()
{
    int n, b, c, d, e;
    cin >> n;
    b=n/1000;n=n%1000; c=n/100; n=n%100;d=n/10; e=n%10;
    if (e==b && c==d) cout << "YES";
        else cout << "NO";

}
