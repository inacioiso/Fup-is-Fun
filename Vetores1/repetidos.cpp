#include <iostream>

using namespace std;

int main() {

    int x, n; cin >> x >> n;
    int r[n];
    int cont = 0;

    for(int i=0; i < n; i++){
        cin >> r[i];

        if(r[i] == x) cont++;
    }

    cout << cont << "\n";

}