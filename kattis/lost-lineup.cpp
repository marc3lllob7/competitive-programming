#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	cin >> n;
	vector <int> a(n);
	a[0] = 1;
	for(int i = 2; i <= n; i++){
		cin >> t;
		a[t + 1] = i;
	}
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
