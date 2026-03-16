#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int m, a, b, c, maior;

    cin >> m >> a >> b;

    c = m - (a+b);

    maior = max(a, max(b,c));

    cout << maior << "\n";
}