#include <bits/stdc++.h>

using namespace std;

int main() {

    double celsius, fahrenheit;
    
    cin >> celsius;

    fahrenheit = 1.8*celsius + 32;

    cout << fixed << setprecision(6) << fahrenheit;

}