#include <bits/stdc++.h>
using namespace std;
void abc(int a, int b, int c, string s){
	if(a > c) swap(a, c);
	if(a > b) swap(a, b);
	if(b > c) swap(b, c);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'A') cout << a;
		if(s[i] == 'B') cout << b;
		if(s[i] == 'C') cout << c;
		cout << ' ';
	}
}
int main() {
	int a, b, c;
	string s;
	cin >> a >> b >> c >> s;
	abc(a, b, c, s);
}
