#include <bits/stdc++.h>
using namespace std;
int main() {
  bool hiss = 0;
	int i = 0;
    string s;
    cin >> s;
    while(i + 1 < s.size()){
        if(s[i] == 's' && s[i + 1] == 's'){
            hiss = 1;
            break;
        }
        i++;
    }
    hiss ? cout << "hiss" : cout << "no hiss";
}
