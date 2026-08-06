#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(i == n - 1) cout << "1 bottle of " << s << " on the wall, 1 bottle of " << s << ".\nTake it down, pass it around, no more bottles of " << s << ".\n\n";
        else {
            cout << n - i << " bottles of " << s << " on the wall, " << n - i; 
            if(n - i - 1 != 1) cout << " bottles of " << s << ".\nTake one down, pass it around, " << n - i - 1 << " bottles of " << s << " on the wall.\n\n";
            else cout << " bottles of " << s << ".\nTake one down, pass it around, " << n - i - 1 << " bottle of " << s << " on the wall.\n\n";
        }
    }
}
