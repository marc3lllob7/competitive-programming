#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, idx, ans = 0;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> idx;
        m[idx] += 1; //map<value, frequency>
    }
    for(auto i : m){
        if(i.first > i.second) ans += i.second;
        else if(i.first < i.second) ans += i.second - i.first;
    }
    cout << ans;
}
