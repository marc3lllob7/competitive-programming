#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	double a, b, ans = 0.0;
	cin >> n;
	while (n--){
		cin >> a >> b;
		ans += a*b;
	}
	cout << fixed << setprecision(3) << ans;
}
