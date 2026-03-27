#include <iostream>

using namespace std;

int main() {

    int n, soma = 0; cin >> n;
    int a[n];
    float media = 0;

    for(int i=0; i < n; i++){
        cin >> a[i];
        soma += a[i];
    }

    cout.precision(1); cout << fixed;
    
    media = soma/n;

    cout << media << "\n";

}