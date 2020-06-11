#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int x1, x2, y1, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;
    d=sqrt(((x1-x2)*(x1-x2)+((y1-y2)*(y1-y2))));
    cout << setprecision(5) << fixed << d;
}
