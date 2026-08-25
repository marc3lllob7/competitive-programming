#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int> setN;
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int auxAccess;
    cin >> n;
    while (n--){
        cin >> auxAccess;
        setN.insert(auxAccess);
    }
    cout << setN.size();
    return 0;
}
