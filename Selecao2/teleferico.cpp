#include <iostream>
#include <cmath>

using namespace std;

// Note o uso de (c-1) devido a necessidade do monitor no teleferico

int main() {

    int c, a, viagens;

    cin >> c >> a;

    if(a%(c-1) == 0){
        viagens = a/(c-1);
        cout << viagens << "\n";
    } else {
        viagens = a/(c-1) + 1;
        cout << viagens << "\n";
    }
}