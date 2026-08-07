#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t, gN, mN;
    cin >> t;
    while(t--){
        long long idx, maxG = -1, maxM = -1;
        cin >> gN >> mN;
        for(int i = 0; i < gN; i++){
            cin >> idx;
            maxG = max(maxG, idx);
        }
        for(int i = 0; i < mN; i++){
            cin >> idx;
            maxM = max(maxM, idx);
        }
        if(maxG >= maxM) cout << "Godzilla\n";
        else cout << "MechaGodzilla\n";
    }
}
