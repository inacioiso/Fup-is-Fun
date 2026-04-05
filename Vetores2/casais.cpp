#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, cont=0; cin >> n;
    int c[n];

    for(int i=0; i < n; i++) cin >> c[i];

    for(int i=0; i < n; i++){
        if(c[i] == 0) continue;
        for(int j=0; j < n; j++){
            if(i == j) continue;
            if(c[j] == 0) continue;
            if(c[i] == -c[j]){
                cont++;
                c[i] = 0;
                c[j] = 0;
                break;
            }
        }
    }

    cout << cont << "\n";

}