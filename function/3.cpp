#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1);
double yuza(double r)
{
    return pi*(r*r);
}
int main()
{
    double r1, r2, r3;

    double S1, S2, S3;
    cin >> r1 >> r2 >> r3;
    S1 = yuza(r1);
    S2 = yuza(r2);
    S3 = yuza(r3);
    cout << S1 << " " << S2 << " " << S3;
}
