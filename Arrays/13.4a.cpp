#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, s=0;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
			for(i=0;i<n;i++)
			{
			if(a[i]<0) break;
			else s += a[i];
			}
				cout << s << endl;
}
