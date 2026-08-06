#include <bits/stdc++.h>
using namespace std;
int main() {
	double n, a, b, c;
	cin >> n;
	while (n--){
		cin >> a >> b >> c;
		if (a + b == c) cout << "Possible\n";
		else if ((a - b == c) || (b - a == c)) cout << "Possible\n";
		else if (a * b == c) cout << "Possible\n";
		else if ((a / b == c) || (b / a == c)) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}
