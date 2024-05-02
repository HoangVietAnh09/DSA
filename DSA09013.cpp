#include <bits/stdc++.h>
using namespace std;
int v, e;
bool chuaXet[1004];
vector<int> ds[1004];
vector<pair<int, int>> dscanh;
void dfs(int u){
    chuaXet[u] = false;
    for(auto x : ds[u]){
        if(chuaXet[x]){
            dfs(x);
        }
    }
}
void dfs2(int u, int s, int t){
    chuaXet[u] = false;
    for(auto v : ds[u]){
        if((u == s && v == t) || (u == t && v == s)) continue;
        if(chuaXet[v]) dfs2(v, s, t);
    }
}
void canhCau(){
    int tplt = 0;
    memset(chuaXet, true, sizeof(chuaXet));
    for(int i = 1; i <= v; i++){
        if(chuaXet[i]){
            ++tplt;
            dfs(i);
        }
    }
    for(auto e : dscanh){
        int x = e.first, y = e.second;
        memset(chuaXet, true, sizeof(chuaXet));
        int dem = 0;
        for(int j = 1; j <= v; j++){
            if(chuaXet[j]){
                dem++;
                dfs2(j, x, y);
            }
        }
        if(dem > tplt){
            cout << min(x, y) << " " << max(x, y) << " ";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i = 1; i <= v; i++) ds[i].clear();
        dscanh.clear();
        cin >> v >> e;
        for(int i = 0 ; i < v; i++){
            int n, m;
            cin >> n >> m;
            ds[n].push_back(m);
            ds[m].push_back(n);
            dscanh.push_back({n, m});
        }
        memset(chuaXet, true, sizeof(chuaXet));
        canhCau();
        cout << endl;
    }
    return 0;
}