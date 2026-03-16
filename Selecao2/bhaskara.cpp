#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float a, b, c, delta, raizDelta, r1, r2;

    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    raizDelta = sqrt(delta);

    cout.precision(2); cout << fixed;

    if (delta > 0){
        r1 = (-b + raizDelta)/(2*a);
        r2 = (-b - raizDelta)/(2*a);

        cout << r1 << "\n";
        cout << r2 << "\n";
    } else if(fabs(delta) < 0.00001){
        r1 = -b/(2*a);
        r2 = r1;

        cout << fabs(r1) << "\n";
    } else {
        cout << "nao ha raiz real" << "\n";
    }

}