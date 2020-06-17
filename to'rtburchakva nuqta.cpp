#include <bits/stdc++.h>
using namespace std;
double masofa(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2, 2.0) + pow (y1-y2, 2.0));
}
double yuza(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p - c));
}
int main()
{
    int x, y, x1, y1, x2, y2, x3, y3, x4, y4;
    double a, b, c, d, e, f, g, i, h, j;
    double S1, S2, S3, S4, S5, S6;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    a = masofa(x1, y1, x2, y2);
    b = masofa(x1, y1, x4, y4);
    c = masofa(x3, y3, x4, y4);
    d = masofa(x2, y2, x3, y3);
    e = masofa(x, y, x1, y1);
    f = masofa(x, y, x2, y2);
    g = masofa(x, y, x3, y3);
    h = masofa(x, y, x4, y4);
    i = masofa(x2, y2, x4, y4);
    S1 = yuza(a, e, f);
    S2 = yuza(e, b, h);
    S3 = yuza(f, g, d);
    S4 = yuza(h, g, c);
    S5 = yuza(a, b, i);
    S6 = yuza(c, d, i);
    if (S5 + S6 == S1 + S2 + S3 + S4) cout << "YES";
    else cout << "NO";
}
