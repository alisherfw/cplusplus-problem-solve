#include<iostream>
using namespace std;
int main()
{
    int n, i;
    char g = 'G', c = 'C', v = 'V';
    cin >> n;
    for (i = 0; i < n; i++)
        {
            swap(c,v);
            swap(g,c);
        }
    cout << g << c << v;
}
