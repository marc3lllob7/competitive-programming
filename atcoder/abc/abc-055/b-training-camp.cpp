#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, r = 1, m = 1e9 + 7;
    cin >> n;
    for(int i = 1; i <= n; i++){
        r *= (i % m);
        r = r % m;
    }
    cout << r;
}
