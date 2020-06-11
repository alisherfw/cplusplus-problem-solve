#include <iostream>
using namespace std;
int main()
{
    string s; int k=0, i;
    cin >> s;
    s.size();
    for (i=0;i<s.size();i++)
        {if (s[i]=='0' || s[i]=='6' || s[i]=='9') k=k+1;
    if (s[i]=='8') k=k+2;}
    cout << k;
}
