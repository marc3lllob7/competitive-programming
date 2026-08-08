#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    vector <int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    int i = 1;
    while(i < n - 1){
        if ((p[i] < p[i - 1] && p[i] > p[i + 1]) || (p[i] > p[i - 1] && p[i] < p[i + 1])) ans++;
        i++;
    }
    cout << ans << '\n';
    return 0;
}
