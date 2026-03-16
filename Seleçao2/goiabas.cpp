#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int capacidade, banana, goiaba, manga, total, tempo;

    cin >> capacidade >> banana >> goiaba >> manga;

    total = banana + goiaba + manga;

    tempo = ceil((float)total/capacidade);

    cout << tempo << "\n";
}