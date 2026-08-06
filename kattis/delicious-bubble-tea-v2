#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, ith, k, price, minb = 1e9;
    vector<int> teaPrice, toppingPrice;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ith;
        teaPrice.push_back(ith);
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> ith;
        toppingPrice.push_back(ith);
    }
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            cin >> ith;
            minb = min(minb, teaPrice[i] + toppingPrice[ith - 1]);
        }
    }
    cin >> price;
    cout << max(0, price / minb - 1);
}
