#include <iostream>
using namespace std;
int main()
{
	int n, a[100], s=0, l=1, i;
	cin >> n;
	for(i=0;i<n-1;i++)
	{
		cin >> a[i];
		s += a[i];
		} 
		for(i=0;i<n-1;i=i+2)
		l *= a[i];
		cout << s << endl << l << endl;
}
