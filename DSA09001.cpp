#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int v, e;
        vector<int> ke[1004];
        cin >> v >> e;
        for(int i = 0; i < e; i++){
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1; i <= v; i++){
            cout << i << ": ";
            for(int x : ke[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}