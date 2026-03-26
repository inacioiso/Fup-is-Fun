#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cin >> num1 >> num2;

    cout << "[ ";
    for(int i=0; i <= num2; i++){
        if((num2 - i) == num1-1) break;
        cout << num1+i << " " << num2-i << " ";
    }
    cout << "]" << "\n";

}