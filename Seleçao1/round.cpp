#include <iostream>
#include <cmath>

using namespace std;

int main() {

    char digito;
    float num, resposta;

    cin >> digito >> num;

    if (digito == 'r') {
        resposta = round(num);
    } else if (digito ==  'f') {
        resposta = floor(num);
    } else {
        resposta = ceil(num);
    }

    cout << resposta << "\n";
}