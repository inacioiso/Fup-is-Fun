#include <iostream>

using namespace std;

int main() {

    float num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if(num1 == num2 && num1 == num3) {
        cout << "3" << "\n";
    } else if (num1 == num2 || num1 == num3 || num2 == num3) {
        cout << "2" << "\n";
    } else {
        cout << "0" << "\n";
    }

}