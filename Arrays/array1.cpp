#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 1, n;
	cin >> n;
	int a[n];
	while(i < n)
	{
		a[i] = j;
		i++;j+=2;
	}
	for(i = 0;i < n; i ++)
	 cout << a[i] << " ";	
}
