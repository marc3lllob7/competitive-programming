#include <bits/stdc++.h>
using namespace std;
int filip(int x){
	int u = x % 10, d = (x / 10) % 10, c = x / 100;
	return u * 100 + d * 10 + c;
}
int main(){
	int a, b;
	cin >> a >> b;
	a = filip(a);
	b = filip(b);
	if (b > a) cout << b;
	else cout << a;
}
