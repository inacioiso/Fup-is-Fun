#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n; cin >> n;
    vector<int> animal(n), ordenado; 

    for(int i=0; i < n; i++) cin >> animal[i];

    for(int i=0; i < n; i++){
        bool existe = false;
        for(int j=0; j < (int)ordenado.size(); j++){
            if(animal[i] == ordenado[j]){
                existe = true;
                break;
            }
        }
        if(!existe){
            ordenado.push_back(animal[i]);
        }
    }

    sort(ordenado.begin(), ordenado.end());

    int tam = (int)ordenado.size();

    for(int i=0; i < tam; i++){
        cout << ordenado[i];
        if(i != tam - 1){
            cout << " ";
        } else {
            cout << "";
        }
    }
    cout << "\n";
}