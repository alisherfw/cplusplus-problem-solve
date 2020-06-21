#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, max=0;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
		
		for(i=0;i<n;i=i+2)
		{
			if(a[i] >= max) max = a[i];
			else continue;
		} cout << max;
}
