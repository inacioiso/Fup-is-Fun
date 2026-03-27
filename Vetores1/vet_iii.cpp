#include <iostream>

using namespace std;

int main() {

    int n; cin >> n;
    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    cout << "[";
    if(n == 0){
        cout << "]" << "\n";
    } else {
        for(int i=0; i < n; i++){
            if(i == n-1 || i == n) {
                cout << a[i] << "]" << "\n";
            } else {
                cout << a[i] << ", ";
            }
        }
    }

}