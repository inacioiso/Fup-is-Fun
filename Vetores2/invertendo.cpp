#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;
    int vet[n], inv[n];

    for(int i=0; i < n; i++){
        cin >> vet[i];
        inv[n-i-1] = vet[i]; 
    }

    cout << "[ ";
    for(int i=0; i < n; i++){
        cout << inv[i] << " ";
    }
    cout << "]" << "\n";
}