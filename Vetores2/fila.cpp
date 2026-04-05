#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n; cin >> n;
    vector<int> alunos, servidores;

    for(int i=0; i < n; i++){
        int p; cin >> p;
        if(p%2 == 0) servidores.push_back(p);
        else alunos.push_back(p);
    }

    cout << "[ ";
    for(int i=0; i < alunos.size(); i++){
        cout << alunos[i] << " ";
    }
    cout << "]" << "\n";

    cout << "[ ";
    for(int i=0; i < servidores.size(); i++){
        cout << servidores[i] << " ";
    }
    cout << "]" << "\n";
}