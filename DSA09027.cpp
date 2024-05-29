#include <bits/stdc++.h>
using namespace std;
int n, m, q, x, y;
bool chuaXet[1004];
vector<int> ds[1004];
void dfs(int s){
    chuaXet[s] = false;
    for(auto x : ds[s]){
        if(chuaXet[x]) dfs(x);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i = 0; i < 1004; i++) ds[i].clear();
        memset(chuaXet, true, sizeof(chuaXet));
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int a, b;
            cin >> a >> b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        cin >> q;
        while (q--) {
            cin >> x >> y;
            memset(chuaXet, true, sizeof(chuaXet));
            dfs(x);
            cout << (!chuaXet[y] ? "YES" : "NO") << endl;
        }
    }
    return 0;
}