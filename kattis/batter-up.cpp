#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, bat;
    double ans = 0;
    vector<int> batterup;
    cin >> n;
    while(n--){
        cin >> bat;
        if(bat != -1){
            batterup.push_back(bat);
            ans += bat;
        }
    }
    cout << setprecision(17) << ans / double(batterup.size());
}
