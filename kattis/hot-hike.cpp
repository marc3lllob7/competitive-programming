#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d = 100, t;
    cin >> n;
    vector<int> ti(n), mti;
    for (int i = 0; i < n; i++){
        cin >> ti[i];
    }
    for (int i = 0; i + 2< n; i++){
        if (max(ti[i], ti[i + 2]) < d){
            d = max(ti[i], ti[i + 2]);
            t = i + 1;
        }
    }
    cout << t << ' ' << d;
}
