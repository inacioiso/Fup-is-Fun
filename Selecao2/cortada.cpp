#include <iostream>

using namespace std;

int main() {

    int b, t, A;
    float Af, Am;

    cin >> b >> t;

    A = 160*70;

    Af = 70*(b+t)/2;

    Am = A - Af;

    if(Af > Am){
        cout << 1 << "\n";
    } else if(Am > Af){
        cout << 2 << "\n";
    } else {
        cout << 0 << "\n";
    }

}