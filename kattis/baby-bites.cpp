#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		string s;
		cin >> s;
		if (s == "mumble") cnt++;
		else if (i == stoi(s)) cnt++;
	}
	if (cnt == n) cout << "makes sense";
	else cout << "something is fishy";
}
