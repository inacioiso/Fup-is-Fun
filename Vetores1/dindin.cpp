#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;
    int sabor[2] = {}; // indice 0 de sabor é para a quantidade de chocolate(c) e indice 1 de sabor é para a quantidade de limão(l)
    int venda[2] = {}; // indice 0 de venda é para a quantidade de manhã(m) e indice 1 de venda é para a quantidade de tarde(t)
    
    for(int i=0; i < n; i++){
        char s; cin >> s;
        char v; cin >> v;

        if(s == 'c') sabor[0]++;
        else sabor[1]++;

        if(v == 'm') venda[0]++;
        else venda[1]++;
    }

    if(sabor[0] > sabor[1]){
        cout << "c" << "\n";
    } else if(sabor[0] < sabor[1]) {
        cout << "l" << "\n";
    } else {
        cout << "empate" << "\n";
    }

    if(venda[0] > venda[1]){
        cout << "t" << "\n";
    } else if(venda[0] < venda[1]) {
        cout << "m" << "\n";
    } else {
        cout << "empate" << "\n";
    }
}