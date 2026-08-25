#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k;
	int cont, x, l;
	cont = x = l = 0;
	cin >> n >> m >> k;
    vector <int> a(n), b(m);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end()); 
	while (x < m && l < n){
		if (a[l] - k <= b[x] && a[l] + k >= b[x]){
			cont++;
            x++;
            l++;
		}
        else if (a[l] - k > b[x]) x++;
		else l++;
	}
	cout << cont;
	return 0;
}
