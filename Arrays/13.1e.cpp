#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100], i, s=0, n;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s += pow(a[i], 2);
	} cout << s << endl;
}
