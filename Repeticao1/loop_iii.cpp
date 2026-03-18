#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num1, num2, maior, menor;

    cin >> num1 >> num2;

    maior = max(num1, num2);
    menor = min(num1, num2);

    cout << "[ ";
    for(int i=maior; i > menor; i--){
        cout << i << " ";
    }
    cout << "]" << "\n";

}