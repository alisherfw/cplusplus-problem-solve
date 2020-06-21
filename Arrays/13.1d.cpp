#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100], n, s=1, i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s *= abs(a[i]);
	} cout << s << endl;
}
