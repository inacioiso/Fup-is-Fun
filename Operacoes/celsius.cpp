#include <iostream>

using namespace std;

int main() {

    double celsius, fahrenheit;
    
    cin >> celsius;

    fahrenheit = 1.8*celsius + 32;

    cout.precision(6); cout << fixed;
    cout << fahrenheit << "\n";
}