#include <iostream>
using namespace std;
int main()
{
     int a;
     float b;
    cout << " 1-kilogramm;  \n 2-milligramm; \n 3-gramm; \n 4-tonnan \n 5-sentner:" << endl;
    cin >> a >> b;
    switch (a)
    {
        case 1: cout << b*1 << " kilogramm";break;
        case 2: cout << b/10000 << " kilogramm";break;
        case 3: cout << b/1000 << " kilogramm";break;
        case 4: cout << b*1000 << " kilogramm";break;
        case 5: cout << b*10 << " kilogramm";break;
        default: cout << "xato";
    }
}


