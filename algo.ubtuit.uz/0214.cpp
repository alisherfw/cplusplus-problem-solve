#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c, p, S;
	cin >> a >> b >> c;
	p=(a+b+c)/2.0;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout << setprecision(3) << fixed << S;
}
