#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B, C;
    cin >> A >> B >> C;
    x = A > 0 && B < 0 && C < 0 || A < 0 && B > 0 && C < 0 || A < 0 && B < 0 && C < 0;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}


