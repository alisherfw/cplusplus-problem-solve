#include <iostream>
using namespace std;
int main()
{
	int a[100], min, i, n;
	cin >> n;
	for(i=0;i<n;i++) 
	{
	cin >> a[i]; 
	} min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i] <= min) min=a[i];
		else continue;
	} cout << min << endl;
	
}
