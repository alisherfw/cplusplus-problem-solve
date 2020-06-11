#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n /= 10;
    n *= n+1;
    if (n!=0) cout << n;
    cout << n;
}
