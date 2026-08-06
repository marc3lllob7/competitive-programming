#include <bits/stdc++.h>
using namespace std;
int main() {
    string sword;
    int n, t, b, l, r, tb = 0, lr = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> sword;
        if (sword[0] - 48 == 0) t = 1;
        else t = 0;
        if (sword[1] - 48 == 0) b = 1;
        else b = 0;
        if (sword[2] - 48 == 0) l = 1;
        else l = 0;
        if (sword[3] - 48 == 0) r = 1;
        else r = 0;
        tb += (t + b);
        lr += (l + r);
    }
    while (tb > 1 && lr > 1){
        ans++;
        tb-=2; lr-=2;
    }
    cout << ans << ' ' << tb << ' ' << lr;
}
