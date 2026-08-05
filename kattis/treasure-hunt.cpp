#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, r0, c0, mov = 0;
    char b[300][300];
    int v[300][300];
    cin >> r >> c;
    for(int i = 0; i < r; i++) cin >> b[i];
    while(true){
        if (r0 < 0 || c0 < 0 || r0 >= r || c0 >= c){
            cout << "Out\n";
            return 0;
        }
        if (v[r0][c0]){
            cout << "Lost\n";
            return 0;
        }
        v[r0][c0] = 1;
        if(b[r0][c0] == 'T'){
            cout << mov;
            return 0;
        }
        mov++;
        switch (b[r0][c0]){
            case 'N': r0--; break;
            case 'S': r0++; break;
            case 'W': c0--; break;
            case 'E': c0++; break;
        }
    }
}
