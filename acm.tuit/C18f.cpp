#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000], i, s=0;
	for (i=0;i<=100;i++)
	{
		cin >> a[i];
		while(a[i]!=0)
		s=a[i]+s;
	}
	cout << s;
	
}
