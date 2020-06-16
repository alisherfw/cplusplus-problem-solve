// Bir o'lchamli massivlar;
// array8;
// 2017.11.12;

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
			if(a[i]%2==1) j++; 
		} 
			
			for(i=0;i<n;i++)
			{
				if(a[i]%2==1) cout << a[i] << " ";
			}
		cout << "toqlar soni: " << j << endl;
}
