#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    float media; 

    cin >> num1 >> num2;

    media = (float)(num1 + num2)/2;

    cout.precision(1); cout << fixed;
    cout << media << "\n";
}