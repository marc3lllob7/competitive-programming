#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
void transform(vector<complex<double>>& a, int k, bool invert){
    int n = 1 << k;
    int rev[n];
    for(int i = 0; i < n; i++){
        int x = rev[i >> 1] >> 1;
        if (i & 1) x += (1 << (k - 1));
        rev[i] = x;
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
    transform(v1, k, 0);
    transform(v2, k, 0);
 
    for(int i = 0; i < 1 << k; i++){
        v1[i] *= v2[i];
    }
 
    transform(v1, k, 1);
 
    vector<long long> res(1 << k);
 
    for(int i = 0; i < 1 << k; i++){
        res[i] = round(v1[i].real());
    }
    return res;
}
 
int main() {
    int k, n, m;
    cin >> k >> n >> m;
 
    vector<long long> a(n), b(m), man(k + 1, 0), plat(k + 1, 0);
 
    for(int i = 0; i < n; i++) cin >> a[i], man[a[i]]++;
    for(int i = 0; i < m; i++) cin >> b[i], plat[b[i]]++;
 
    vector<long long> ans = multiply(man, plat);
 
    for(int i = 2; i <= 2 * k; i++){
        cout << ans[i] << ' ';
    }
}
