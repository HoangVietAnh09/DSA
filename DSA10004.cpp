#include <bits/stdc++.h>
using namespace std;
vector<int> ds[1004];
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i = 0; i < 1004; i++) ds[i].clear();
        int v, e;
        cin >> v >> e;
        for(int i = 1; i <= e; i++){
            int u, v;
            cin >> u >> v;
            ds[u].push_back(v);
            ds[v].push_back(u);
        }
        int dinhLe = 0;
        for(int i = 1; i <= v; i++){
            if(ds[i].size()%2){
                dinhLe++;
            }
        }
        if(dinhLe == 0) cout << 2 << endl;
        else if(dinhLe == 2) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}