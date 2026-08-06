#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string restaurant, menuItem;
    cin >> n;

    for (int i = 0; i < n; i++){
        bool peaSoup = 0, pancakes = 0;
        
        cin >> k;
        cin.ignore();

        getline(cin, restaurant);

        for (int j = 0; j < k; j++){

            getline(cin, menuItem);

            if (menuItem == "pea soup") peaSoup = 1;
            if (menuItem == "pancakes") pancakes = 1;
        }

        if (peaSoup && pancakes){
            cout << restaurant;
            return 0;
        }
    }
    cout << "Anywhere is fine I guess";
}
