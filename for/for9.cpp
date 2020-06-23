#include <iostream>
using namespace std;
int main()
{
	int a, b, s=1, j=0;
	cin >> a >> b;
	for(int i=a; i<=b;i++) {
		s=i*2;
		j=j+s;
	}
	cout << j << endl;
}
