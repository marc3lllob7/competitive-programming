#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    
    if(n >= 0) cout << 0;
    if(n >= 1) cout << ' ' << 1;
    
    int prepre = 0, pre = 1, act = 0;
    
    for(int i = 0; i < n - 2; i++){
        cout << ' ';
        act = pre + prepre;
        cout << act;
        
        prepre = pre;
        pre = act;
    }
    cout << '\n';

    return 0;
}
