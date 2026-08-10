// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool check(int x, int n, vector<int> &a, vector<int> &b){

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }

        int l = 0, r = n, ans = 0;

        while(l <= r){
            int m = l + (r - l)/ 2;
            if(check(m, n, a, b)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans;
    }
}
