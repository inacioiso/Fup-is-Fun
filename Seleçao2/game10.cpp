#include <iostream>

using namespace std;

int main() {

    int n, d, a, cont;

    cin >> n >> d >> a;

    if (d > a) {
        cont = d - a;
    } else if(d == a) {
        cont = 0;
    } else {
        cont  = (n-a) + d;
    }

    cout << cont << "\n";

}