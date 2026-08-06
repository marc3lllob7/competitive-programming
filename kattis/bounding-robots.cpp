#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, l, n;
    while (cin >> w >> l && w != 0 && l != 0){
        char x; int y, robotud = 0, robotlr = 0, actuallr = 0, actualud = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x >> y;
            if (x == 'u'){
                robotud += y;
                if (actualud + y < l) actualud += y;
                else actualud = l - 1;
            }
            if (x == 'd'){
                robotud -= y;
                if (actualud - y > -1) actualud -= y;
                else actualud = 0;
            }
            if (x == 'l'){
                robotlr -= y;
                if (actuallr - y > -1) actuallr -= y;
                else actuallr = 0;
            }
            if (x == 'r'){
                robotlr += y;
                if (actuallr + y < w) actuallr += y;
                else actuallr = w - 1;
            }
        }
        cout << "Robot thinks " << robotlr << ' ' << robotud << "\nActually at " << actuallr << ' ' << actualud << "\n\n";
    }
}
