#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;

    if(n%2 == 0){
        for(int i=1; i <= n-1; i += 2){
            cout << i << "\n";
        }

        for(int i=n; i >= 0; i -= 2){
            cout << i << "\n";
        }
    } else {
        for(int i=1; i <= n; i += 2){
            cout << i << "\n";
        } 

        for(int i=n-1; i >= 0; i -= 2){
            cout << i << "\n";
        }
    }

}