#include <iostream>
using namespace std;

int main() {
    float entrada; cin >> entrada;
    int troco = (int)(entrada * 100 + 0.5);

    int opcoes[11] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5};
    int n = sizeof(opcoes)/sizeof(opcoes[0]);
    
    string valores[11] = {"100.00", "50.00", "20.00", "10.00", "5.00", "2.00", "1.00", "0.50", "0.25", "0.10", "0.05"};

    for (int i = 0; i < n; i++) {
        int quantidade = troco / opcoes[i];
        
        if (quantidade > 0) {
            cout << quantidade << " de " << valores[i] << endl;
        }
        
        troco %= opcoes[i];
    }

    cout.precision(2); cout << fixed;
    if (troco > 0) {
        cout << "Falta " <<(float)troco / 100.0 << "\n";
    }   
}