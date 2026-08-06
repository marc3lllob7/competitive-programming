#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, m, ith, k, price, minb = 1e9;
    vector<int> teaPrice, toppingPrice;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ith;
        teaPrice.push_back(ith);
        //cout << teaPrice[i] << ' ';
    }
    //cout << '\n';
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> ith;
        toppingPrice.push_back(ith);
        //cout << toppingPrice[i] << ' ';
    }
    //cout << '\n';
    for (int i = 0; i < n; i++){
        cin >> k;
        //cout << k << ' ';
        //vector<int> teaToppingRatio;
        for (int j = 0; j < k; j++){
            cin >> ith;
            minb = min(minb, teaPrice[i] + toppingPrice[ith - 1]);
            //teaToppingRatio.push_back(ith);
            //cout << teaToppingRatio[j] << ' ';
        }
        //teaPrice[i] += minb;
        //cout << '\n';
    }
    cin >> price;
    //cout << price;
    //int res = *min_element(teaPrice.begin(), teaPrice.end());
    cout << max(0, price / minb - 1);
}
