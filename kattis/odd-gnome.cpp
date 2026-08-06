#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, g, prev, curr;
	cin >> n;
	while (n--){
		int idx = 1;
		cin >> g >> prev;
		g--;
		while (g--){
			cin >> curr;
			idx++;
			if ((curr - prev) != 1) {
				cout << idx << '\n';
				continue;
			}
			prev = curr;
		}
	}
}
