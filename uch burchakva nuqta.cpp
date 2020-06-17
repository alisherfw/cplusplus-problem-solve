#include <bits/stdc++.h>
using namespace std;
double masofa(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1-x2, 2.0)+pow(y1-y2, 2.0));
}
double yuza(double a, double b, double c)
{

    double p = (a+b+c) / 2.0;
    return sqrt (p * (p-a) * (p-b)*(p-c));
}
int main()
{
    int  x, y, x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y ;
    double a = masofa (x1, y1, x2, y2);
    double b = masofa (x2, y2, x3, y3);
    double c = masofa (x1, y1, x3, y3);
    double d = masofa (x1, y1, x, y);
    double e = masofa (x2, y2, x, y);
    double f = masofa (x, y, x3, y3);
    double S = yuza(a, b, c);
    double S1 = yuza (a, d, e);
    double S2 = yuza(c, f, d);
    double S3 = yuza (e, f, b);
    if (fabs(S-S1-S2-S3)<=0.000001) cout << "YES";
    else cout << "NO";
}
