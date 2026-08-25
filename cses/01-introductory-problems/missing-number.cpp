#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n, x;
    cin >> n;
    vector<bool> v(2e5 + 1, 0);
    for(int i = 0; i < n; i++){
        cin >> x;
        v[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if (v[i] == 0){
            cout << i;
            break;
        }
    }
}
