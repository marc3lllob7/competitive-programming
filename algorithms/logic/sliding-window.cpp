// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // state variables (sum, count, frequency, etc) and best answer
    int l = 0, sum = 0, ans = 0;

    for(int r = 0; r < n; r++){
        // add a[r] to the sum
        sum += a[r];

        // while the window is invalid ...
        while(sum > t){ // invalid condition
            // substract a[l] from the window
            sum -= a[l];
            l++;
        }

        // update answer
        ans = max(ans, r - l + 1); // for max lenght subarray
        // ans += (r - l + 1) - for counting all of the subarrays that match the rule
    }

    cout << ans;
}
