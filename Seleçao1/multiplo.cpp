#include <iostream>

using namespace std;

int main() {

    int num,resto;
    cin >> num;

    resto = num%7;

    resto == 0 ? cout << "SIM" << "\n" : cout << "NAO" << "\n";
}