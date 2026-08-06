#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> names(n);
  for(int i = 0; i < n; i++) cin >> names[i];
  vector<string> increasing(names), decreasing(names);
  sort(increasing.begin(), increasing.end());
  sort(decreasing.rbegin(), decreasing.rend());
  if(names == increasing) cout << "INCREASING";
  else if(names == decreasing) cout << "DECREASING";
  else cout << "NEITHER";
}
