#include <iostream>

using namespace std;

int cars(int wheels, int bodies, int figures) {
    wheels /= 4;
    figures /= 2;
    
    if(wheels < bodies && wheels < figures)
        return wheels;
    else if (bodies < wheels && bodies < figures)
        return bodies;
    else if(figures < wheels && figures < bodies)
        return figures;
}

int main() {
    int wheels, bodies, figures;
    cin >> wheels >> bodies >> figures;
    cout << cars(wheels, bodies, figures) << endl;
}