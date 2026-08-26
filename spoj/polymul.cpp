#include <bits/stdc++.h>
using namespace std;

void fftransform(vector<complex<double>>& a, int k, bool invert){
    int n = 1 << k;
    vector<int> rev (n, 0);
    for(int i = 0; i < n; i++){
        rev[i] = rev[i >> 1] >> 1;
        if (i & 1) rev[i] |= (1 << (k - 1));
    }
    for(int i = 0; i < n; i++){
        if (rev[i] > i){
            swap(a[i], a[rev[i]]);
        }
    }
    for(int len = 2; len <= n; len <<= 1){
        const double pi = acos(-1.0);
        double base = 2 * pi / len;

        if (invert) base *= -1;

        complex<double> wlen(cos(base), sin(base));

        for(int i = 0; i < n; i += len){

            complex<double> w = 1;

            for(int j = 0; j < len / 2; j++){
                complex<double> u = a[i + j];
                complex<double> v = a[i + j + len / 2] * w;

                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;
                
                w *= wlen;
            }
        }

    }
    if(invert) for(int i = 0; i < n; i++){
        a[i] /= n;
    }
}

vector<long long> multiply(vector<long long>& p1, vector<long long>& p2){
    int n = (p1.size() + p2.size());
    int k = 0;
    while(true){
        if ((1 << k) >= n) break;
        k++;
    }

    vector<complex<double>> v1(1 << k), v2(1 << k);

    for(int i = 0; i < p1.size(); i++){
        v1[i] = p1[i];
    }
    for(int i = 0; i < p2.size(); i++){
        v2[i] = p2[i];
    }
    fftransform(v1, k, 0);
    fftransform(v2, k, 0);

    for(int i = 0; i < 1 << k; i++){
        v1[i] *= v2[i];
    }

    fftransform(v1, k, 1);

    vector<long long> res(1 << k);

    for(int i = 0; i < 1 << k; i++){
        res[i] = round(v1[i].real());
    }
    return res;
}

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> p1(n + 1), p2(n + 1);
        for(int i = 0; i < n + 1; i++) cin >> p1[i];
        for(int i = 0; i < n + 1; i++) cin >> p2[i];
        vector<long long> ans = multiply(p1, p2);
        for(int i = 0; i <= 2*n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}
https://spoj.com/problems/POLYMUL/
