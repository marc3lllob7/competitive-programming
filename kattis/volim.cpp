#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, n, idx, sum = 0;
    char s;
    cin >> k >> n;
    for(int i = 0; i < n; i++){
        cin >> idx >> s;
        sum += idx;
        if(sum >= 210) break;
        if(s == 'T'){
            if(k < 8) k++;
            else k = 1;
        }
    }
    cout << k;
}
