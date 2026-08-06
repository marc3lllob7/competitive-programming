#include <bits/stdc++.h>
using namespace std;
int main() {
	int g, s, c;
	cin >> g >> s >> c;
	int sum = g*3 + s*2 + c;
	if (sum >= 8) cout << "Province or Gold";
	else if (sum >= 6) cout << "Duchy or Gold";
	else if (sum == 5) cout << "Duchy or Silver";
	else if (sum >= 3) cout << "Estate or Silver";
	else if (sum == 2) cout << "Estate or Copper";
	else cout << "Copper";
}
