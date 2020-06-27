#include<iostream>
using namespace std;
int main()
{
    float s=10, l=0, p, k;
    cin >> p;
    while(s < 200)
    {
        s = s + (s * p / 100);
        l ++;
    }
    cout << s << " " << l;
}
