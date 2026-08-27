// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        ans = (ans % MOD) * (2 % MOD);
        ans = ans % MOD;
    }
    cout << ans;
}
