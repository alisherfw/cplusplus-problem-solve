#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b, c, d;
    int l=0;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    getline(cin,d);
    cout << a << ": ";
    a1:if (b[l]>c[l]) swap(b, c);
        else if (b[l]==c[l]) {l++; goto a1;}
        l=0;
    b1:if (b[l]>d[l]) swap(b, d);
        else if (b[l]==d[l]) {l++; goto b1;}
        l=0;
    c1:if (c[l]>d[l]) swap(d, c);
        else if (d[l]==c[l]) {l++; goto c1;}
        l=0;
    cout << b << ", " << c << ", " << d;
}
