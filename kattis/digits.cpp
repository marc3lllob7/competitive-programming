#include <bits/stdc++.h>
using namespace std;
void digits(string s){
	int crr = s.size();
	int i = 2;
	while(true){
		int nxt = 0;
		int tmp = crr;
		//cout << "next: " << nxt << " temporal: "<< tmp << " current: " << crr << " index: " << i << '\n' << '\n';
		while(0 < tmp){
			tmp /= 10;
			nxt++;
		}
		if(crr == nxt){
			cout << i << '\n';
			break;
		}
		i++;
		crr = nxt;
	}
}
int main() {
	string s;
	cin >> s;
	while (s != "END"){
		int n;
		istringstream iss(s);
		iss >> n;
		if (n == 1) cout << 1 << '\n';
		else {
			digits(s);
		}
		cin >> s;
	}
}
