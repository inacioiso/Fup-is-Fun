#include <iostream>

using namespace std;

int main() {
    int produto1, produto2, produto3;
    float valor1, valor2, valor3, dinheiro, troco;

    cin >> produto1 >> produto2 >> produto3;

    cin >> valor1 >> valor2 >> valor3;

    cin >> dinheiro;

    troco = dinheiro - (produto1*valor1 + produto2*valor2 + produto3*valor3);

    cout.precision(2); cout << fixed;
    cout << troco << "\n";
}