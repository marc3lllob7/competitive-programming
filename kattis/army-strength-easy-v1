#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, nG, nM;
    cin >> t;
    while(t--){
        cin >> nG >> nM;
        vector<int> g(nG), m(nM);
        for(int i = 0; i < nG; i++) cin >> g[i];
        for(int i = 0; i < nM; i++) cin >> m[i];
        sort(g.rbegin(), g.rend());
        sort(m.rbegin(), m.rend());
        if(nG && !nM){
            cout << "Godzilla\n";
            break;
        }
        if(!nG && nM){
            cout << "MechaGodzilla\n";
            break;
        }
        while(1){
            int gB = g.back(), mB = m.back();
            if(gB >= mB) m.pop_back();
            else g.pop_back();
            if(g.empty()){
                cout << "MechaGodzilla\n";
                break;
            }
            else if(m.empty()){
                cout << "Godzilla\n";
                break;
            }
        }
    }
}
