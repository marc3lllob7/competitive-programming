#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
    int cntB = 0, cntW = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W') cntW++;
        if(s[i] == 'B') cntB++;
    }
    cout << (cntW == cntB);
}
