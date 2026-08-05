#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	cout.precision(9);
	if (x == 0 && y == 1) cout << "ALL GOOD";
	else if (y == 1) cout << "IMPOSSIBLE";
	else cout << fixed << x / (1.0 - y);
}
