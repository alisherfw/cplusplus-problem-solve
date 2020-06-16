#include<iostream>
using namespace std;
int main()
{
    int n, k=0, l=0;
    cin >> n;
    if (n%3==0) {k=n/3; l=0;}
    if (n%3==1) {k=n/3-1; l=l+2;}
    if (n%3==2) {k=n/3; l=1;}
    cout << l << " " << k;
}
