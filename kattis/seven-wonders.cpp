#include <bits/stdc++.h>
using namespace std;
int main() {
    int cntT = 0, cntC = 0, cntG = 0, cntS = 0;
	string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'T') cntT++;
        if(s[i] == 'C') cntC++;
        if(s[i] == 'G') cntG++;
    }
    cout << pow(cntT, 2) + pow(cntC, 2) + pow(cntG, 2) + (min(cntT, min(cntG, cntC)) * 7);
}
