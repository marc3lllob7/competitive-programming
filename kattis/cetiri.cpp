#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> a(3);
	for(int i = 0; i < 3; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int i = 0, ans = 1e9, flag = -1e9;
	while (i < 2){
		ans = min(a[i + 1] - a[i], ans);
		flag = max(a[i + 1] - a[i], flag);
		i++;
	}
	if(ans == flag) cout << ans + a[2] << '\n';
	else{
		if(a[1] - a[0] == flag) cout << a[0] + ans << '\n';
		if(a[2] - a[1] == flag) cout << a[1] + ans << '\n';
	}
}
