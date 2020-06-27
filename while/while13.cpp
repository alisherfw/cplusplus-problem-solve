#include<iostream>
using namespace std;
int main()
{
    float s, l=0, p, k;
    cin >> s >> p;
    k = s;
    while(s < 2 * k)
    {
        s = s + (s * p / 100);
        l ++;
    }
    cout << s << " " << l;
}
