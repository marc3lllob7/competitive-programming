#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int> setN;
    int auxAccess;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> auxAccess;
        setN.insert(auxAccess);
    }
    cout << setN.size();
    return 0;
}
