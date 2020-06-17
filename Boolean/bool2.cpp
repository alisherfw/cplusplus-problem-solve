#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A;
    cin >> A;
    x = A % 2 == 1;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}
