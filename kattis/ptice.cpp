#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cntadrian = 0, cntbruno = 0, cntgoran = 0;
    cin >> n;
    string s;
    cin >> s;
	string adrian = "ABC";
    string bruno = "BABC";
    string goran = "CCAABB";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == adrian[i % 3]) cntadrian++;
        if(s[i] == bruno[i % 4]) cntbruno++;
        if(s[i] == goran[i % 6]) cntgoran++;
    }
    int m = max(cntadrian, max(cntbruno, cntgoran));
    cout << m << '\n';
    if(m == cntadrian) cout << "Adrian\n";
    if(m == cntbruno) cout << "Bruno\n";
    if(m == cntgoran) cout << "Goran\n";
}
