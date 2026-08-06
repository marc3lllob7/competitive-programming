#include <bits/stdc++.h>
using namespace std;
double combinationLock(double p, double c1, double c2, double c3) {
    double ans = 0;
    ans += 80;
    if (p > c1) ans += (p - c1);
    else if (c1 > p) ans += 40 + (p - c1);
    ans += 40;
    if (c2 > c1) ans += (c2 - c1);
    else if (c1 > c2) ans += 40 + (c2 - c1);
    if (c2 > c3) ans += (c2 - c3);
    else if (c3 > c2) ans += 40 + (c2 - c3);

    return ans * 9;
}
int main() {
	int p, a, b, c;
    while (cin >> p >> a >> b >> c){
        if(p == 0 && a == 0 && b == 0 && c == 0) break;
        cout << (int)combinationLock(p, a, b, c) << '\n';
    }
}
