#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;
    
    if(n == 10){
        cout << "[ ";
        for(int i=0; i < 10; i++){
            cout << i << " ";
        }
        cout << "]" << "\n";
    } else {
        cout << "[ ";
        for(int i=0; i < 10; i++){
            if(i == n){
                continue;
            } else {
                cout << i << " ";
            }
        }
        cout << "ceu ]" << "\n";
    }
}