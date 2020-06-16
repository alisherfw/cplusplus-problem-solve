#include <iostream>
using namespace std;
int main()
{
    int i, a, b, s, k, w[1000];
    char x;
    cin >> a >> x >> b;
    s = a*60+b;
    cin >> k;w[0]=0;
    for (i=1;i<k;i++)
    cin >> w[i];
    for (i=0;i<k;i++)
    {
        s += w[i];
        if ((s / 60) % 24 < 10) cout <<'0'<<(s / 60) % 24;
         else cout <<(s / 60) % 24;
        cout << ":";
        if ((s % 60) < 10) cout <<'0'<<s % 60;
         else cout <<s % 60 ;
         cout<<"\n";
    }
}
