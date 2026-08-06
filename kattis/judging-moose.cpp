#include <bits/stdc++.h>
using namespace std;
int main() {
	int l, r;
	cin >> l >> r;
	if (l == r){
		if (l == 0 && r == 0) cout << "Not a moose";
		else cout << "Even " << l + r;
	}
	else {
		if (l > r) cout << "Odd " << 2*l;
		else cout << "Odd " << 2*r;
	}
}
