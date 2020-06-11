#include<iostream>
using namespace std;
int main()
{
    char a;
    int n, m, i, j, s=0, minn=101;
    cin >> n >> m;
    for (i=0;i<n;i++)
    {
        s=0;
        for (j=0;j<m;j++)
        {
            cin >> a;
            if(a == '.') s++;
        } if(s<minn) minn = s;
    }
    cout << minn;
}
