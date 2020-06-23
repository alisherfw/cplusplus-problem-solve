#include <iostream>
using namespace std;
int main()
{
     int a;
     float b;
    cout << "1-detsimetr;2-millimetr;3-metr;4-kilometr;5-santimetr:";
    cin >> a >> b;
    switch (a)
    {
        case 1: cout << b/10;break;
        case 2: cout << b*1000;break;
        case 3: cout << b*1;break;
        case 4: cout << b/1000;break;
        case 5: cout << b/100;break;
        default: cout << "xato";
    }
}
