#include <bits/stdc++.h>
using namespace std;
double price(double p, double a, double b, double c, double d, double k){
	return p * (sin(a*k+b)+cos(c*k + d) + 2);
}
int main(){
	double p, a, b, c, d, n, ans = -1e9, vmax = -1e9, vmin = 1e9;
	cin >> p >> a >> b >> c >> d >> n;
	for(double i = 1; i <= n; i++){
		double curr = price(p, a, b, c, d, i);
		if(curr > vmax){
			vmax = curr;
			vmin = curr;
		}
		if(curr < vmin || vmin == 1e9) vmin = curr;
		if(vmax - vmin > ans) ans = vmax - vmin;
	}
	cout << setprecision(12) << ans;
}
