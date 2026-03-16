#include <iostream>

using namespace std;

int main() {

    float salario, novoSalario;

    cin >> salario;

    if(salario <= 1000){
        novoSalario = 1.2*salario;
    } else if(salario > 1000 && salario <= 1500){
        novoSalario = 1.15*salario;
    } else if(salario > 1500 && salario <= 2000){
        novoSalario = 1.1*salario;
    } else {
        novoSalario = 1.05*salario;
    }
    
    cout.precision(2); cout << fixed;
    cout << novoSalario << "\n";

}