#include <iostream>
#include <math.h>

using namespace std;

int kvadrat(int a) {
	return a * a;
}

int ildiz(int a) {
	return sqrt(a);
}

double foiz(double a,  double b) {
	return a / 100 * b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << a << " ning kvadrati: " << kvadrat(a) << endl;
	cout << b << " ning kvadrati: " << kvadrat(b) << endl;
	cout << a << " ning ildizi: " << ildiz(a) << endl;
	cout << b << " ning ildizi: " << ildiz(b) << endl;
	cout << a << " ning " << b << " foizi: " << foiz(a, b) << endl;
	cout << b << " ning " << a << " foizi: " << foiz(b, a) << endl;
	
	return 1;
}
