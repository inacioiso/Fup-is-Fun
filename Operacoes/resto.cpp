#include <bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2, quociente, resto; 

    cin >> num1 >> num2;

    quociente = num1/num2;

    resto = num1%num2;

    cout << quociente << " " << resto;
}