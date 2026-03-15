#include <iostream>

using namespace std;

int main() {

    int p, d1, d2, soma;

    cin >> p >> d1 >> d2;

    soma = d1 + d2;

    if(p == 0) {
        if(soma%2 == 0){
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    } else {
        if(soma%2 == 0){
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

}