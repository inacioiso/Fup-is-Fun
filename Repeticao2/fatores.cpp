#include <iostream>
#include <cmath>

//O uso do tipo long long se justifica devido ao grandes valores que podem se assumir aqui 
#define ll long long

using namespace std;

int main() {

    ll n; cin >> n;
    
    for(ll i=2; i*i <= n; i++){
        if(n%i == 0){
            int cont = 0;
            while(n%i == 0){
                n /= i;
                cont++;
            }
            cout << i << " " << cont << "\n";
        }
    }

    if (n > 1) {
        cout << n << " 1\n";
    }

}