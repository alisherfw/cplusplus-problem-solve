#include <iostream>
using namespace std;
int main()
{
     int D, M;
    cin >> D >> M;
    if (D>31) cout << "bunday kun yo'q";return 0;
    if (D<32) cout <<
    switch (M)
    {
        case 1: if (D==31) cout << "1 2";
            else cout << D+1 << " " << M;break;
        case 2: if (D==28) cout << "1 3";
            else cout << D+1 << " " << M;break;
        case 3: if (D==31) cout << "1 4";
            else cout << D+1 << " " << M;break;
        case 4: if (D==30) cout << "1 5";
            else cout << D+1 << " " << M;break;
        case 5: if (D==31) cout << "1 6";
            else cout << D+1 << " " << M;break;
        case 6: if (D==30) cout << "1 7";
            else cout << D+1 << " " << M;break;
        case 7: if (D==31) cout << "1 8";
            else cout << D+1 << " " << M;break;
        case 8: if (D==31) cout << "1 9";
            else cout << D+1 << " " << M;break;
        case 9: if (D==30) cout << "1 10";
            else cout << D+1 << " " << M;break;
        case 10: if (D==31) cout << "1 11";
            else cout << D+1 << " " << M;break;
        case 11: if (D==30) cout << "1 12";
            else cout << D+1 << " " << M;break;
        case 12: if (D==31) cout << "1 1";
            else cout << D+1 << " " << M;break;
       default: cout << "xato";

    }
}
