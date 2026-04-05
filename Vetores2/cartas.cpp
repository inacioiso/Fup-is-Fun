#include <iostream>

using namespace std;

int main() {
 
    int n; cin >> n;
    int a[n];

    for(int i=0; i < n; i++) cin >> a[i];
    
    cout << "[";
    for(int i=0; i < n; i++){
        if(a[i] == 1){
            cout << "A";
        } else if(a[i] == 11){
            cout << "J";
        } else if(a[i] == 12){
            cout << "Q";
        } else if(a[i] == 13){
            cout << "K";
        } else {
            cout << a[i];
        }

        if(i < n-1) cout << ", ";
    }
    cout << "]" << "\n";

}