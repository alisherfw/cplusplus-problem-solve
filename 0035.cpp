#include <iostream>
using namespace std;
int main()
{
    int d=0, a, i, m[111111],n[111111];
    cin >> a;
    for(i=0; i<a; i++){
        cin >> n[i]>>m[i];
    d= 19*m[i] + (n[i] + 239)*(n[i] + 366) / 2;
    cout << d << endl;}
}
