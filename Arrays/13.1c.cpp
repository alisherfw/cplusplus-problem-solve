#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100], n, i, s=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s = s + abs(a[i]);
	} cout << s << endl;
}
