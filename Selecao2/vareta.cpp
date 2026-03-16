#include <iostream>

using namespace std;

int main() {

    int l1, l2, l3;

    cin >> l1 >> l2 >> l3;

    if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
        cout << "True" << "\n";
    } else {
        cout << "False" << "\n";
    }

}