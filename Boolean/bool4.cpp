#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B;
    cin >> A >> B;
    x = A<2 && B<=3;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}

