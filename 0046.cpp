#include<iostream>
#include<string>
using namespace std;
int main()
{
    string e="2.7182818284590452353602875";
    int n;
    cin >> n;
    if(n == 0) {cout << 3;return 0;}
    cout << e.substr(0,n+1);
    if (e[n+2]>52) cout << (char)(e[n+1]+1);
    else cout << (char)e[n+1];
}
