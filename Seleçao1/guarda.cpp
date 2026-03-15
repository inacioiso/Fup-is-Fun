#include <iostream>

using namespace std;

int main() {

    bool wifi, login, admin;

    cin >> wifi >> login >> admin;

    if (!wifi) {
        cout << "you must connect to wifi" << "\n";
    } else if (!login) {
        cout << "you need to login first" << "\n";
    } else if (!admin){
        cout << "you must to login as admin" << "\n";
    } else {
        cout << "done" << "\n";
    }
}