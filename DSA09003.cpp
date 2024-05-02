#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a[1004];
        int v, e;
        cin >> v >> e;
        for(int i = 0; i < e; i++){
            int n, m;
            cin >> n >> m;
            a[n].push_back(m);
        }
        for(int i = 1; i <= v; i++){
            cout << i << ": ";
            sort(a[i].begin(), a[i].end());
            for(auto x : a[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}