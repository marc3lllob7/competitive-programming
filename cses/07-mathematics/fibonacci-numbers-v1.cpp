// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>

using namespace std;
using matrix = vector<vector<long long>>;

const int MOD = 1e9 + 7;

matrix multiply(const matrix &a, const matrix &b){
    matrix c(2, vector<long long>(2, 0));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                c[i][j] = (c[i][j] % MOD) + ((a[i][k] % MOD) * (b[k][j] % MOD) % MOD);
                c[i][j] %= MOD;
            }
        }
    }

    return c;
}

matrix power(matrix base, long long exp){
    matrix res = {{1, 0}, {0, 1}};
    while(exp > 0){
        if (exp & 1) res = multiply(res, base);
        base = multiply(base, base);
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    matrix initializedMatrix = {{1, 1}, {1, 0}};

    cin >> n;

    initializedMatrix = power(initializedMatrix, n);

    cout << initializedMatrix[1][0];
}
