#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a>b) swap (a, b);
	if(b>c) swap (b, c);
	if(a>c) swap (a, c);
	if(a>b && a<c) cout << c;
	else cout << a;
}
