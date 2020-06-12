#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int s; float h;
    cin >> s >> h;
    cout << setprecision(2) <<  fixed <<s*2/h;
}
