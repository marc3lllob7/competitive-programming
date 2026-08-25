#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a;
    if (n < 4 && n > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    for(int i = 1; i <= n; i++){
        if (i % 2 == 0) a.push_back(i);
    }
    for(int i = 1; i <= n; i++){
        if (i % 2 != 0) a.push_back(i);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}
