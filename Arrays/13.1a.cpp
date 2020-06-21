#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, s=0;
	cin >> n;
	for(i=0;i<n-1;i++)
	{
		cin >> a[i];
		s += a[i];
	} cout << s;
}
