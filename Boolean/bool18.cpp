#include<iostream>
using namespace std;
int main()
{
    bool x;
    int A, B, C;
    cin >> A >> B >> C;
    x = A == B || A == C || B == C;
        cout << ((x == 1)?"Rost":"Yolg\'on");
}


