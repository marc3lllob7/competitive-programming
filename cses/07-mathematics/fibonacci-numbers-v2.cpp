// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

struct matrix {
    long long mat[2][2];

    matrix() {
        mat[0][0] = mat[0][1] = mat[1][0] = mat[1][1] = 0;
    }

    matrix operator*(const matrix &other) const{
        matrix c;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                for(int k = 0; k < 2; k++){
                    c.mat[i][j] = (c.mat[i][j] % MOD) + ((this->mat[i][k] % MOD) * (other.mat[k][j] % MOD) % MOD);
                    c.mat[i][j] %= MOD;
                }
            }
        }
        return c;
    }
};

matrix power(matrix base, long long exp){
    matrix res;
    res.mat[0][0] = 1;
    res.mat[1][1] = 1;

    while(exp > 0){
        if (exp & 1) res = res * base;
        base = base * base;
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    matrix ans;

    ans.mat[0][0] = 1;
    ans.mat[0][1] = 1;
    ans.mat[1][0] = 1;

    cin >> n;

    ans = power(ans, n);

    cout << ans.mat[1][0];
}
