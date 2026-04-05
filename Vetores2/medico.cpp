#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, cont = 0; cin >> n;
    vector<int> s(n);

    for(int i=0; i < n; i++) cin >> s[i];

    for(int i=0; i < n; i++){
        if(s[i] == 0){
            bool medico_perto = false;

            if(i > 0 && s[i-1] == 1) medico_perto = true;
            if(i < n-1 && s[i+1] == 1) medico_perto = true;

            if(!medico_perto) cont++;
        }
    }

    cout << cont << "\n";

}