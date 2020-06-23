#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
        case 1:
        case 3:
        case 5:
        case 8:
        case 10:
        case 12: cout << "30";break;
        case 4:
        case 6:
        case 7:
        case 9:
        case 11: cout << "30";break;
        case 2: "28 yoki 29";break;
        default: cout << "Xato";
    }
}



