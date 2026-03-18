#include <iostream>

using namespace std;

int main() {

    int idade, total;

    cin >> idade >> total;

    while(total--){
        cout << idade << "\n";
        idade += 2;
    }
}