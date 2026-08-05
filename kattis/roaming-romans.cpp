#include <bits/stdc++.h>
using namespace std;
int main() {
	double x;
	cin >> x;
	double ans = x * 1000 * (double) 5280/4854;
	if ((ans) - int (ans) >= 0.5){
		cout << int (ans) + 1;
	} else {
		cout << int (ans);
	}
}
