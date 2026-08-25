#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(ll i, vector<ll>& v, ll sum1, ll sum2, ll n){
    if (i == n) return abs(sum1 - sum2);
    ll a = solve(i + 1, v, sum1 + v[i], sum2, n);
    ll b = solve(i + 1, v, sum1, sum2 + v[i], n);
    return min(a, b);
}
int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll ans = solve(0, v, 0, 0, n);
    cout << ans;
    return 0;
}
