#include <iostream>
using namespace std;
int main()
{
    int n, s=0;
    cin >> n;
    while(n!=0)
    {
        if(n%10==2) return cout << "bor" , 0;
        n=n/10;
    }
    cout << "yoq";
}
