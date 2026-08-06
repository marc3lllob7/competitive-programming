#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> p(2);
    int number;
    char letter;
    while(cin >> letter >> number){
        if(letter == 'A') p[0] += number;
        if(letter == 'B') p[1] += number;
    }
    (p[0] > p[1]) == true ? cout << 'A' : cout << "B";
}
