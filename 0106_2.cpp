 #include<iostream>
using namespace std;
int main()
{
    int n, i, t, s = 0;
    cin >> n;

    for (i = 0;i < n; i ++)
    {
        cin >> t;
        s += t;
    }

    if (s < n-s) cout << s;
    else cout << n-s;
}
