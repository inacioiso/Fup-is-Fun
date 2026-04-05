#include <iostream>

using namespace std;

int main() {

    int n, pares = 0, impares = 0; cin >> n;
    int p[n];

    for(int i=0; i < n; i++){
        cin >> p[i];
        
        if(p[i]%2 == 0) pares += p[i];
        else impares += p[i];
    }

    if(pares > impares) cout << "rebeldes" << "\n";
    else if(impares > pares) cout << "soldados" << "\n";
    else cout << "empate" << "\n";
}