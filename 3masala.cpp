// Example program
#include <iostream>
using namespace std;
int main()
{
    int a[6], maxx=0;
    bool change = false;
    for(int i=0;i<6;i++)
        cin >> a[i];
    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 6; j++) {
            
            if(a[i] < a[j]) {
                a[i] = a[j];
                break;
           }
            if(j == 5) {
                a[i] = 0;
            }
        }
        }
    a[5] = 0;
    for(int i = 0; i < 6; i++)
        cout << a[i] << " ";
}

/*
    3. A(n,n) jadvalni xar bir elementini o’zidan keyin kelgan eng yaqin katta qiymatli elementga almashtirsin. Agar bunday element bo’lmasa 0 ga almashtirsin.
Masalan A=1 3 2 5 3 4
	Javob:    A=3 5 5 0 4 0

*/