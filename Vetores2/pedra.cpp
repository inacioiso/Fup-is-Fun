#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {

    int n, idx = -1, m = INT_MAX; cin >> n;
    vector<int> v(n);

    for(int i=0; i < n; i++){
        int a, b; cin >> a >> b;
        int dif = abs(a-b);

        if(a >= 10 && b >= 10){
            v[i] = dif;
            if(dif < m){
                m = dif;
                idx = i;
            } else {
                continue;
            }
        }
    }

    if(idx == -1){
        cout << "sem ganhador" << "\n";
    } else {
        cout << idx << "\n";
    }

}