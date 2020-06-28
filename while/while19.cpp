#include <iostream>
using namespace std;
int main()
{
    int n, s=0, l=0;
    cin >> n;
    while(n!=0)
    {
        s=s+(n%10);
        l++;
        n /= 10;
    }cout << s << " " << l;
}
