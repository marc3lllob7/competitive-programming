#include <bits/stdc++.h>
using namespace std;
int main() {
	int d;
	string m;
	cin >> m >> d;
	if ((m == "DEC" && d == 25) || (m == "OCT" && d == 31)) cout << "yup";
	else cout << "nope";
}
