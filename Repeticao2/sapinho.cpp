#include <iostream>

using namespace std;

int main() {

    int p, s, e, alturaAtual = 0;

    cin >> p >> s >> e;

    while(alturaAtual < p){

        if((alturaAtual + s) >= p){
            cout << alturaAtual << " " << "saiu" << "\n";
            break;
        } else {
            cout << alturaAtual << " " << (alturaAtual + s) << "\n";
            alturaAtual += s - e;
        }
    }

}