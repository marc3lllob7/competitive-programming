#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, p, l, e, r, s, n;
    while(cin >> m >> p >> l >> e >> r >> s >> n){
        int ans = 0;
        for(int i = 0; i < n; i++){
            int t = l;
            l = m * e;
            m = p / s;
            p = t / r;
        }
        cout << m << '\n';
    }
}
