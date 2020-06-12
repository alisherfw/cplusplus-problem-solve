#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c, p;
    cin >> a >> b >> c;
    p=(a+b+c)/2;
    cout << setprecision(2) << fixed << p;
}
