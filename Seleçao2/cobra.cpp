#include <iostream>

using namespace std;

int main() {

    int n, x, y, s;
    char u;

    cin >> n >> x >> y >> u >> s;

    if(u == 'R'){
        x = (x + s) % n;
    } else if(u == 'L'){
        x = (x - s % n + n) % n;
    } else if(u == 'D'){
        y = (y + s) % n;
    } else if(u == 'U') {
        y = (y - s % n + n) % n;
    }

    cout << x << " " << y << "\n";
}