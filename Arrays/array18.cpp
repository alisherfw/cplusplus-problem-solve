#include <iostream>
using namespace std;
int main()
{
	int a[10], n, i, j=0;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]<a[n-1]) 
			{
				cout << a[i] << endl; return 0;
 			}
			 else j++;	
		} if(j==n) cout << 0;
}
