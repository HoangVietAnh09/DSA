#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<int> ds[1004];
bool chuaXet[1004];
void BFS(int u){
    queue<int> qu;
    qu.push(u);
    chuaXet[u] = false;
    while(!qu.empty()){
        int q = qu.front();
        qu.pop();
        cout << q << " ";
        for(int v : ds[q]){
            if(chuaXet[v]){
                chuaXet[v] = false;
                qu.push(v);
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
        cin >> v >> e >> u;
        for(int i = 0; i < e; i++){
            int a, b;
            cin >> a >> b;
            ds[a].push_back(b);
        }
        BFS(u);
        cout << endl;

    }
    return 0;
}