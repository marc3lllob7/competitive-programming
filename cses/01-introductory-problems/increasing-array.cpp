#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, x = 0, ans = 0, curr = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        curr = max(x, curr);
        cin >> x;
        if (x < curr) ans += (curr - x);
    }
    cout << ans;
}
