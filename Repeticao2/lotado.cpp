#include <iostream>

using namespace std;

int main() {

    int c; cin >> c;
    int atual=0;

    while(atual <= 2*c){
        int m; cin >> m;

        atual += m;

        if(atual == 0){
            cout << "vazio" << "\n";
        } else if(atual > 0 && atual < c){
            cout << "ainda cabe" << "\n";
        } else if(atual == c || atual < 2*c){
            cout << "lotado" << "\n";
        } else if(atual >= 2*c){
            cout << "hora de partir" << "\n";
            break;
        }
    }

}