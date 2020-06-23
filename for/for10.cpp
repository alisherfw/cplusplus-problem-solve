#include <iostream>
using namespace std;
int main()
{
	float n, j=0, s=1;
	cin >> n;
	for(int i=1;i<n;i++) 
	{
		s=1/n;
		
		j=j+s;
	}
	cout << j << endl;
}
