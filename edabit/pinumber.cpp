#include <iostream>
#include <iomanip>

using namespace std;

void piNumber(double num) {
    double pi = 3.141592653589793238;
    cout << setprecision(num+1) << pi << endl;
}

int main() {
    int num;
    cin >> num;

    piNumber(num);
}