#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
    cin >> a >> b;
    ((b - 1) % (a - 1) == 0)? cout << (b - 1) / (a - 1) : cout << (b - 1) / (a - 1) + 1;
}
