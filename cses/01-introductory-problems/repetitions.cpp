#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int ans = 1, l = 1;
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++){
        int at = s[i - 1];
        if (at == s[i]) l++;
        else l = 1;
        ans = max(ans, l);
    }
    cout << ans;
}
