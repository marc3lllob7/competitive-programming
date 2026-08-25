#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int> setN;
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int auxAccess;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> auxAccess;
        setN.insert(auxAccess);
    }
    cout << setN.size();
    return 0;
}
