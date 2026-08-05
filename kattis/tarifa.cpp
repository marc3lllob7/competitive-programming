#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, n, p, ans = 0;
	cin >> x >> n;
	while (n--){
		cin >> p;
		ans += (x - p);
	}
	cout << ans + x;
}
