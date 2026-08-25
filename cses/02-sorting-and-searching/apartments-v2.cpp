#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k;
    int cont, i, j;
    cont = i = j = 0;
    cin >> n; cin >> m; cin >> k;
    vector <int> a (n); vector <int> b (m);
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end()); 
    i = j = 0;
    while (i < n && j < m){
        if (abs(a[i] - b[j]) <= k){
            cont++;
            i++;
            j++;
	}
	else{
            if(a[i] - b[j] > k) j++;
            else i++;
        }
     }
    cout << endl << cont;
    return 0;
}
