#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, minval = 1e9, minidx = 1e9, i = 0;
	cin >> n;
	while (n--) {
		cin >> a;
		if (a < minval) {
			minval = a;
			minidx = i;
		}
		i++;
	}
	cout << minidx;
}
