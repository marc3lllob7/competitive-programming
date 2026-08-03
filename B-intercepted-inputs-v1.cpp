#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, k, ans;
	cin >> t;
	while(t--){
		cin >> k;
		vector <int> a(k);
		for (int i = 0; i < k; i++) cin >> a[i];
		sort (a.begin(), a.end());
		ans = k - 2;
		int lt = 0, rt = k - 1;
		while (lt < rt){
			int target = a[lt] * a[rt];
			if (target < ans) lt++;
			else if (target > ans) rt--;
			else if (target = ans) break;
		}
		cout << a[lt] << " " << a[rt] << '\n';
	}
}
