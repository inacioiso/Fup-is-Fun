#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cin >> num1 >> num2;

    cout << "[ ";
    while(num1 < num2){
        if(num1%2 == 0){
            num1++;
            continue;
        } else {
            cout << num1 << " ";
            num1++;
        }
    }
    cout << "]" << "\n";

}