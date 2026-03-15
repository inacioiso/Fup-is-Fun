#include <iostream>
#include <algorithm>

using namespace std;

// Também é possível resolver sem as funções min e max, apenas com if

int main() {

    int num1, num2, num3, maior, menor, meio, soma;

    cin >> num1 >> num2 >> num3;

    soma = num1 + num2 + num3;

    maior = max(num1, max(num2, num3));

    menor = min(num1, min(num2, num3));

    meio = soma - (maior + menor);

    cout << meio << "\n";
    cout << maior << "\n";
    cout << menor << "\n";    
}