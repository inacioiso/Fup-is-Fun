#include <iostream>

using namespace std;

int main() {
    int n;
    char pe;

    cin >> n >> pe;

    cout << "[ ";

    bool primeiro = true;

    for (int i = 0; i <= 10; ++i) {
        if (i == n) {
            continue;
        }

        if (!primeiro) {
            cout << " ";
        }

        if (i == 10) {
            cout << "ceu";
        } else {
            cout << "" << i << pe << "";
            
            if (pe == 'd') {
                pe = 'e';
            } else {
                pe = 'd';
            }
        }

        primeiro = false;
    }

    cout << " ]" << endl;
}