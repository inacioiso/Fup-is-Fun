#include <iostream>

using namespace std;

int main() {

    int nota1, nota2, notaf;
    float media;

    cin >> nota1 >> nota2 >> notaf;

    media = (nota1 + nota2)/2;

    if(media >= 7) {
        cout << "aprovado" << "\n";
    } else if(media < 4) {
        cout << "reprovado" << "\n";
    } else {
        media = (nota1 + nota2 + notaf)/3;

        if(media > 5){
            cout << "aprovado na final" << "\n";
        } else {
            cout << "reprovado na final" << "\n";
        }
    }

}