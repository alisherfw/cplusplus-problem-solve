#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B;
    cin >> A >> B;
    x = A>=0 && B<-2;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}


