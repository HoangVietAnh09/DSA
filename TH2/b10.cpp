#include <bits/stdc++.h>
using namespace std;
vector<int> ds[1004];
bool chuaXet[1004];
int ok;
void BFS(int u, int v){
    queue<int> q;
    queue<string> res;
    res.push(to_string(u) + " ");
    q.push(u);
    chuaXet[u] = false;
    while(!q.empty()){
        int k = q.front();
        q.pop();
        string s = res.front();
        res.pop();
        if(k == v){
            cout << s;
            ok = 0;
            break;
        }
        for(int i : ds[k]){
            if(chuaXet[i]){
                chuaXet[i] = false;
                q.push(i);
                res.push(s + to_string(i) + " ");
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(chuaXet, true, sizeof(chuaXet));
        for(int i = 0; i < 1004; i++) ds[i].clear();
        ok = 1;
        int n, m, u, v, x, y;
        cin >> n >> m >> u >> v;
        for(int i = 0; i < m; i++){
            cin >> x >> y;
            ds[x].push_back(y);
        }
        BFS(u, v);
        if(ok) cout << -1;
        cout << endl;

    }
    return 0;
}