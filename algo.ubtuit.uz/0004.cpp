#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double r, S;
    cin >> r;
    S=4*(3.14159265*(r*r));
    cout << setprecision(2) << fixed << S;
}
