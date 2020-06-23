 #include <iostream>
using namespace std;
int main()
{
    int n, b, a, c;
    cin >> n;
    n-=1983;
    a=n%12;
    b=(n/12+1)%5;

    switch(b)
    {
        //if (b>60) b=b%60;
    case 1: cout << "Yashil ";break;
    case 2: cout << "Qizil ";break;
    case 3: cout << "Sariq ";break;
    case 4: cout << "Oq ";break;
    case 0: cout << "Qora ";break;
}
    switch (a)
{
    case 1: cout << "sichqon";break;
    case 2: cout << "sigir";break;
    case 3: cout << "yo'lbars";break;
    case 4: cout << "quyon";break;
    case 5: cout << "ajdar";break;
    case 6: cout << "ilon";break;
    case 7: cout << "ot";break;
    case 8: cout << "qoy";break;
    case 9: cout << "maymun";break;
    case 10: cout << "tovuq";break;
    case 11: cout << "it";break;
    case 0: cout << "to'ng'iz";break;
}
}
