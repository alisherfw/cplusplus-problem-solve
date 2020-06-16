#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, d, e;
	cin >> n;
	a=n/100000; n=n%100000;
	b=n/10000; n=n%10000;
	c=n/1000; n=n%1000;
	d=n/100; n=n%100;
	e=n/10;
	n=n%10;
	if(a+b+c==d+e+n) cout << "YES" << endl;
	else cout << "NO" << endl;
}
