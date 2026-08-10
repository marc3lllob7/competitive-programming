#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, r, k, ans = 0;

    cin >> n >> r >> k;

    if (r > k) ans += r;
    else ans += (k + (k - r));

    while(ans < n){
        ans += 2;
    }

    ans += r;

    cout << ans;
}
