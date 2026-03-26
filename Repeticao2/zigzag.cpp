#include <iostream>

using namespace std;

int main() {

    int inicio, fim;

    cin >> inicio >> fim;

    for(int i=inicio; i <= fim; i++){
        if(i%3 != 0 && i%5 != 0){
            cout << i << "\n";
        } else if(i%3 == 0 && i%5 != 0){
            cout << "zig" << "\n";
        } else if(i%3 != 0 && i%5 == 0){
            cout << "zag" << "\n";
        } else {
            cout << "zigzag" << "\n";
        }
    }

}