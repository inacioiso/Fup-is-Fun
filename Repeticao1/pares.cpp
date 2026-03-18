#include <iostream>

using namespace std;

int main() {
    
    int num1, num2, soma;

    cin >> num1 >> num2;

    soma=0;

    if(num2 < num1){
        cout << "invalido" << "\n";
    } else {
        for(int i=num1; i <= num2; i++){
            if(i%2 == 0) soma += i;
        }
        
        cout << soma << "\n";
    }
}