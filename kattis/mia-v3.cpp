#include <bits/stdc++.h>
using namespace std;
int getScore(int h, int l){
	if(l > h) swap(l, h);
	if(h == 2 && l == 1) return 10000;
	if(h == l) return h * 100;
	return h * 10 + l;
}
int main(){
	int a, b, c, d;
	while (cin >> a >> b >> c >> d && a != 0 && b != 0){
		int scr1 = getScore(a, b);
		int scr2 = getScore(c, d);
		if(scr1 == scr2) cout << "Tie.\n";
		if(scr1 > scr2) cout << "Player 1 wins.\n";
		if(scr1 < scr2) cout << "Player 2 wins.\n";
	}
}
