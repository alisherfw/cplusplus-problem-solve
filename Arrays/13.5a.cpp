#include <iostream>
using namespace std; 
int main()
{
	int a[100], max=0, i, n;
	cin >> n;
	for(i=0;i<n;i++) 
	{
		cin >> a[i];
	} for(i=0;i<n;i++) {
		if(a[i] >= max) max=a[i];
		else continue;
	} cout << max << endl;
	return 0;		
}

