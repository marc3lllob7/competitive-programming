#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> p(26);
    int n; char l; string s;
	int ans = 0, sum = 0;
    while((cin >> n >> l >> s) && n != -1){
        if(s == "right"){
            ans++;
            sum += n + p[l - 65];
        }
        else p[l - 65] += 20;
    }
    cout << ans << ' ' << sum;
}
