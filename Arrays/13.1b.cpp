#include <iostream>
using namespace std;
int main()
{
	int a[100], i, s=1, n;
	cin >> n;
	for(i=0;i<n-1;i++)
	{
		cin >> a[i];
		s = s * a[i];
	} cout << s;
}
