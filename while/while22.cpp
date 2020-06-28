#include <bits/stdc++.h>1
using namespace std;
int main()
{
    int n, i=1;
    cin >> n;
    while(i<sqrt(n))
    {
        i ++;
        if(n%i == 0) return cout << "Tub emas" , 0;
    }
    cout << "Tub";
}
