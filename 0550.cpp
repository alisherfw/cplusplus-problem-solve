#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) cout << "12/09/";
        else cout << "13/09/";
    if (a<10)cout<<"000";
    else if (a<100)cout<<"00";
         else if (a<1000)cout<<"0";
    cout << a;
}
