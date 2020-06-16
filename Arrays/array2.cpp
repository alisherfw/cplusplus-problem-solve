#include <iostream>
using namespace std;
int main()
{
	int n, i=0, j=1;
	cin >> n;
	int a[n];
	while(i < n)
	{
		a[i]=j;
		i++;j=j*2;
	} for(i=0;i<n;i++)
	cout << a[i] << " ";
}
