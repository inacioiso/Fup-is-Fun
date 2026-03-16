#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    int h, l;

    cin >> a >> b >> c >> h >> l;

    if(((a <= h && b <= l) || (b <= h && a <= l)) ||
       ((a <= h && c <= l) || (c <= h && a <= l)) ||
       ((b <= h && c <= l) || (c <= h && a <= l))){
        cout << "S" << "\n";
    } else {
        cout << "N" << "\n";
    }

}