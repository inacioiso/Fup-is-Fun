#include <bits/stdc++.h>

using namespace std;

int main() {
    int tempo, horas, minutos, segundos;

    cin >> tempo;

    horas = tempo/3600;

    tempo %= 3600;
    
    minutos = tempo/60;

    tempo %= 60;

    segundos = tempo;

    cout << horas << ":" << minutos << ":" << segundos;

}