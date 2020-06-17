#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A;
    cin >> A;
    x = A > 9 && A < 100 && A % 2 == 0;
        cout << ((x == 1)?"Rost":"Yolg\'on");
}
