#include <iostream>
using namespace std;
int main()
{
	int s=0, a[100], n, i;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> a[i];
		s += a[i];
	} s=s/n;
	cout << s << endl; 
}
