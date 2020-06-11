#include <iostream>
using namespace std;
int main()
{
    int a, b, c, maxx, minn;
    cin >> a >> b >> c;
    if (a>b) maxx=a;
    else maxx=b;
    if (c>maxx) maxx=c;
    if (a<b) minn=a;
    else minn=b;
    if (minn>c) minn=c;
    cout << maxx-minn;
}
