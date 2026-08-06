#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, y, n, i = 1;
	cin >> x >> y >> n;
	while (n--){
		if (i % x == 0) cout << "Fizz";
		if (i % y == 0) cout << "Buzz";
		if ((i % x != 0) && (i % y != 0)) cout << i;
		cout << '\n';
		i++;
	}
}
