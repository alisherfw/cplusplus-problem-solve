#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, s=0;
	cin >> n;
	
	for(i=0;i<n;i++)
	cin >> a[i]; 
	
	for(i = 0; i < n; i ++)
		for(int j = i + 1; j < n; j ++)
		if(a[i]>a[j]) swap(a[i],a[j]);
	
	for(i = 0; i < n; i ++)
	cout << a[i] << " "; 
	
	
}
