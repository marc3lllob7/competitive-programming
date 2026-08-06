#include <bits/stdc++.h>
using namespace std;
void mia(int s0, int s1, int r0, int r1){
	int p1 = (max(s0, s1) * 10) + min(s0, s1);
	int p2 = (max(r0, r1) * 10) + min(r0, r1);
	if (p1 == p2) cout << "Tie.\n";
	else {
		if (p1 == 21) cout << "Player 1 wins.\n";
		else if (p2 == 21) cout << "Player 2 wins.\n";
		else if ((s0 == s1) && (r0 != r1)) cout << "Player 1 wins.\n";
		else if ((r0 == r1) && (s0 != s1)) cout << "Player 2 wins.\n";
		else if ((p1 > p2) && (s0 == s1)) cout << "Player 1 wins.\n";
		else if ((p2 > p1) && (r0 == r1)) cout << "Player 2 wins.\n";
		else if (p1 > p2) cout << "Player 1 wins.\n";
		else if (p2 > p1) cout << "Player 2 wins.\n";
	}
}
int main() {
	int s0, s1, r0, r1;
	cin >> s0 >> s1 >> r0 >> r1;
	while (s0 != 0 && s1 != 0 && r0 != 0 && r1 != 0){
		mia(s0, s1, r0, r1);
		cin >> s0 >> s1 >> r0 >> r1;
	}
}
