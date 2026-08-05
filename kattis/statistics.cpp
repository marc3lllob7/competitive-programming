#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, i = 1;
	while (cin >> n) {
		int nmin = INFINITY, nmax = -INFINITY;
		while (n--) {
			cin >> a;
			nmin = min(nmin, a);
			nmax = max(nmax, a);
		}
		cout << "Case " << i << ": " << nmin << " " << nmax << " " << nmax - nmin << '\n';
		i++;
	}
}
