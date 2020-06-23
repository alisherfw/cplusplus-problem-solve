#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i=b-1;i>a;i--)
		cout << i << " ";
	cout << endl << b-a-1 << endl;
}
