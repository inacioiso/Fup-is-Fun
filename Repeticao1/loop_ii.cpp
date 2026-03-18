#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    cout << "[";

    for(int i=a; i <= b-1; i++){
        cout << " " << i;
    }

    cout << " ]" << "\n";

}