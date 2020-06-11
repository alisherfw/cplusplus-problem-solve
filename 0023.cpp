#include <iostream>
using namespace std;
int main ()
{
int a, b, d=0, i;
cin >> a;
for (i=1;i<a+1;i++)
if (a%i==0) d+=i;
cout << d;
}
