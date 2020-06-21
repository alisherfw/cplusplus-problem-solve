#include <iostream>
using namespace std;
int main() {
	int a[100], n, min, i;
	cin >> n;
	for(i=0;i<n;i++)
	cin >> a[i]; min=a[1];
		for(i=1;i<n;i=i+1)
		{
			if(a[i] <= min) min=a[i];
			else continue;
		} cout << min << endl;
}
