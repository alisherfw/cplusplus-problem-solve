#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B;
    cin >> A >> B;
    x = A % 2 == 1 || B % 2 == 1;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}

