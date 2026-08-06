#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, a, b, c;
	cin >> t;
	while (t--){
		cin >> a >> b >> c;
		if ((a + c) < b) cout << "advertise\n";
		else if ((a + c) > b) cout << "do not advertise\n";
		else cout << "does not matter\n";
	}
}
