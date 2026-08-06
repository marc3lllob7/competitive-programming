#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        int sum = 0, win = 0, idx = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            if (win < a[i]){
                win = max(win, a[i]);
                idx = i + 1;
            }
        }
        sort(a.begin(), a.end());
        if (a[n - 1] == a[n - 2]) cout << "no winner\n";
        else {
            if ((double)win <= (double)(sum / 2)) cout << "minority winner " << idx << '\n';
            else cout << "majority winner " << idx << '\n';
        }
    }
}
