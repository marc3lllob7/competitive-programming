#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while (n--){
      cin >> s;
      if (s != "P=NP") {
        istringstream iss(s);
        int a, b;
        char op;
        iss >> a >> op >> b;
        cout << a + b << '\n';
      }
      else cout << "skipped\n";
    }
}
