#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long power(long long base, long long exp){
    long long res = 1;
    while(exp > 0){
        if (exp & 1) res = ((res % MOD) * (base % MOD)) % MOD;

        base = (base % MOD) * (base % MOD);
        base %= MOD;

        exp >>= 1;
    }
    return res;
}

void nttransform(vector<long long>& a, int k, bool invert){
    int n = 1 << k;
    vector<long long> rev(n);
    for(int i = 0; i < n; i++){
        rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << (k - 1));
    }
    for(int i = 0; i < n; i++){
        if (rev[i] > i){
            swap(a[i], a[rev[i]]);
        }
    }

    for(int len = 2; len <= n; len <<= 1){

        int wlen;

        if (invert) wlen = power(332748118, (MOD - 1) / len);
        else wlen = power(3, (MOD - 1) / len);

        for(int i = 0; i < n; i += len){

            int w = 1;

            for(int j = 0; j < len / 2; j++){
                int u = a[i + j];
                int v = (a[i + j + len / 2] * w * 1LL) % MOD;

                a[i + j] = (u + v) % MOD;
                a[i + j + len / 2] = (u - v + MOD) % MOD;

                w = (1LL * wlen * w) % MOD;
            }
        }

    }
    int in = power(n, MOD - 2);
    if(invert) for(int i = 0; i < n; i++){
        a[i] = (1LL * a[i] * in) % MOD;
    }
}

vector<long long> multiply_mod(vector<long long>& p1, vector<long long>& p2){
    long long n = (p1.size() + p2.size());
    long long k = 0;
    while(true){
        if ((1 << k) >= n) break;
        k++;
    }

    vector<long long> v1(1 << k, 0), v2(1 << k, 0);

    for(int i = 0; i < p1.size(); i++){
        v1[i] = p1[i];
    }
    for(int i = 0; i < p2.size(); i++){
        v2[i] = p2[i];
    }

    nttransform(v1, k, 0);
    nttransform(v2, k, 0);

    for(int i = 0; i < 1 << k; i++){
        v1[i] = (1LL * v1[i] * v2[i]) % MOD;
    }

    nttransform(v1, k, 1);

    return v1;
}

vector<long long> poly_power(vector<long long> a, int exp){
    vector<long long> res = {1};
    while(exp > 0){
        if (exp & 1) res = multiply_mod(res, a);
        a = multiply_mod(a, a);

        exp >>= 1;
    }
    return res;
}

int main() {
    int n, k, d, t = 0;
    cin >> n >> k;
    vector<long long> p(10, 0);
    for(int i = 0; i < k; i++){
        cin >> d;
        p[d] = 1;
    }
    vector<long long> ans = poly_power(p, n / 2);
    for(int i = 0; i < ans.size(); i++){
        t = (t + 1LL * ans[i] * ans[i]) % MOD;
    }
    cout << t;
}
