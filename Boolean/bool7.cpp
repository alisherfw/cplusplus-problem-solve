#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B, C;
    cin >> A >> B >> C;
    x = A<B && B<C  || A>B && B>C;
    cout << ((x == 1)?"Rost":"Yolg\'on");
}



