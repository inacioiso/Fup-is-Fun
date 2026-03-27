#include <iostream>
#include <climits>

using namespace std;

int main() {

    int a[5];
    int menor = INT_MAX;

    for(int i=0; i < 5; i++){
        cin >> a[i];

        if(a[i] < menor) menor = a[i];
    }

    cout << menor << "\n";

}