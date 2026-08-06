#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c;
	string n, s, b;
	cin >> t;
	while (t--){
		cin >> n >> s >> b >> c;
		cout << n;
		int s_aux, b_aux;
		s_aux = stoi(s.substr(0, 4));
		b_aux = stoi(b.substr(0, 4));
		if (s_aux >= 2010) cout << " eligible\n";
		else if (b_aux >= 1991) cout << " eligible\n";
		else if (c <= 40) cout << " coach petitions\n";
		else cout << " ineligible\n";
	}
}
