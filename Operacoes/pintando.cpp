#include <bits/stdc++.h>

using namespace std;

int main() {

    float x1,x2,y1,y2, deltaX, deltaY, distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    deltaX = x1 - x2;
    deltaY = y1 - y2;

    distancia = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

    cout << fixed << setprecision(2) << distancia;
}