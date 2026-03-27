#include <iostream>

using namespace std;

int main() {

    int b, c, n, patas = 0; cin >> b >> c >> n;
    char a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];

        if(a[i] == 'v' || a[i] == 'c'){
            patas += 4;
        } else {
            patas += 2;
        }
    }

    cout << patas << "\n";

    if(abs(b - patas) > abs(c - patas)) {
        cout << "Cebolinha" << "\n";
    } else if(abs(b - patas) < abs(c - patas)) {
        cout << "Chico Bento" << "\n";
    } else {
        cout << "empate" << "\n";
    }

}