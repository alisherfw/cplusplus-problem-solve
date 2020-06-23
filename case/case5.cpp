#include <iostream>

using namespace std;

int main()
{
    float A, B;
    int C; //C - amal butun soni.
    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "Amal kiriting(1-qo'shish;2-ayirish;3-bo'lish;4-ko'paytirish;):"; cin >> C;
    switch (C)
    {
        case 1: cout << A+B; break;
        case 2: cout << A-B; break;
        case 3: cout << A/B; break;
        case 4: cout << A*B; break;
        default: cout << "Xato";
    }
}
