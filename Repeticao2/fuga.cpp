#include <iostream>

using namespace std;

int main() {

    int h, p, f, d; cin >> h >> p >> f >> d;

    while(true){
        f += d;

        if(f > 15) f = 0;
        else if(f < 0) f = 15;

        if (f == h) {
            cout << "S" << "\n";
            break;
        }
        if (f == p) {
            cout << "N" << "\n";
            break;
        }
    }

}