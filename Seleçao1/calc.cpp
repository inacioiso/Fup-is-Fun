#include <iostream>

using namespace std;

int main() {

    float num1, num2, soma, subtracao, multiplicacao, divisao;
    char simbolo;
    
    cin >> num1;
    cin >> num2;
    cin >> simbolo;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1*num2;
    divisao = num1/num2;

    cout.precision(0); cout << fixed;

    switch(simbolo){
        case '+':
            cout << soma << "\n";
            break;
        case '-':
            cout << subtracao << "\n";
            break;
        case '*':
            cout << multiplicacao << "\n";
            break;
        case '/':
            cout << (int)divisao << "\n";
            break;
    }

}