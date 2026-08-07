#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t, gN, mN;
    cin >> t;
    while(t--){
        cin >> gN >> mN;
        vector <long long> g(gN), m(mN);
        for(int i = 0; i < gN; i++) cin >> g[i];
        for(int i = 0; i < mN; i++) cin >> m[i];
        sort(g.rbegin(), g.rend());
        sort(m.rbegin(), m.rend());
        if(g[0] >= m[0]) cout << "Godzilla\n";
        else cout << "MechaGodzilla\n";
    }
}
