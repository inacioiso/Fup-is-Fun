#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cin >> num1 >> num2;

    if(num1 > num2){
        cout << "[ ";
        for(int i=num1; i > num2; i--){
            cout << i << " ";
        }
        cout << "]" << "\n";
    } else {
        cout << "[ ";
        for(int i=num1; i < num2; i++){
            cout << i << " ";
        }
        cout << "]" << "\n";
    }

}