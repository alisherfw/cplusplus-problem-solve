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
			if(a[i]%2==0) 
			{
			cout << a[i] << " "; j++;
			}
		} cout << "juftlar soni: " << j << endl;
		
}
