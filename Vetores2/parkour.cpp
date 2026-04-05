#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, cont = 0; cin >> n;
    vector<int> p(n);

    for(int i=0; i < n; i++) cin >> p[i];

    for(int i=1; i < n; i++){
        int dif = abs(p[i] - p[i-1]);

        if(dif >= 2) cont++;
    }

    cout << cont << "\n";
}