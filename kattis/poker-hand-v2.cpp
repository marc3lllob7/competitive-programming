#include <bits/stdc++.h>
using namespace std;
int pokerHand(string s) {
    if(s[0] >= '0' && s[0] <= '9') return s[0] - '0' - 1;
    else if(s[0] == 'T') return 9;
    else if(s[0] == 'J') return 10;
    else if(s[0] == 'Q') return 11;
    else if(s[0] == 'K') return 12;
    else return 0;
}
int main() {
    int idx, mx = 0;
	string s;
	vector<int> vi(13);
    for(int i = 0; i < 5; i++){
        cin >> s;
        idx = pokerHand(s);
        vi[idx]++;
        mx = max(mx, vi[idx]);
    }
    cout << mx;
}
