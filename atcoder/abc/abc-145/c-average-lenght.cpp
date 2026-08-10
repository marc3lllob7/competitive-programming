#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double sum = 0;
    cin >> n;
    vector<int> x(n), y(n), order(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        order[i] = i;
    }
    do {
        for(int i = 0; i < n - 1; i++){
            sum += sqrt(pow(x[order[i]] - x[order[i + 1]], 2) + pow(y[order[i]] - y [order[i + 1]], 2));
        }
    } while(next_permutation(order.begin(), order.end()));
    cout << setprecision(11) << sum / tgamma(n + 1);
}
