#include <bits/stdc++.h>
using namespace std;
int main() {
	int l, x, p, t = 0, ans = 0;
    string s;
    cin >> l >> x;
    while(x--){
        cin >> s >> p;
        if(s == "leave") p *= -1;
        if((t + p) > l) ans++;
        else t += p;
    }
    cout << ans;
}
