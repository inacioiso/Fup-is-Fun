#include <iostream>

using namespace std;

int main() {

    int dia, hora, minuto;

    cin >> dia >> hora >> minuto;

    if (dia > 1 && dia <= 6) {

        if(hora >= 8 && hora <= 11 && minuto >= 0 && minuto <= 59){
            cout << "SIM" << "\n";
        } else if (hora >= 14 && hora <= 17 && minuto >= 0 && minuto <= 59) {
            cout << "SIM" << "\n";
        } else {
            cout << "NAO" << "\n";
        }

    } else if (dia == 7) {

        if(hora >= 8 && hora <= 11 && minuto >= 0 && minuto <= 59){
            cout << "SIM" << "\n";
        } else {
            cout << "NAO" << "\n";
        }
    } else {
        cout << "NAO" << "\n";
    }

}