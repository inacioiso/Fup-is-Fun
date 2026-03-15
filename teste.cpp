#include <iostream>

using namespace std;

int main() {

    char jog1, jog2;

    cin >> jog1 >> jog2;

    if(jog1 == 'R' && jog2 != 'R') {
        if(jog2 == 'P') {
            cout << "jog2" << "\n";
        } else {
            cout << "jog1" << "\n";
        }
    } else if(jog1 == 'P' && jog2 != 'P') {
        if(jog2 == 'S') {
            cout << "jog2" << "\n";
        } else {
            cout << "jog1" << "\n";
        }
    } else if(jog1 == 'S' && jog2 != 'S') {
        if(jog2 == 'R'){
            cout << "jog2" << "\n";
        } else {
            cout << "jog1" << "\n";
        }
    } else {
        cout << "empate" << "\n";
    }
}