#include <bits/stdc++.h>
using namespace std;
int v, e, s, t, truoc[1004];
vector<int> ds[1004];
bool chuaXet[1004];
queue<int> qu;
void BFS(int u){
    qu.push(u);
    chuaXet[u] = false;
    cout << u << " ";
    while(!qu.empty()){
        int q = qu.front();
        qu.pop();
        for(auto x : ds[q]){
            if(chuaXet[x]){
                chuaXet[x] = false;
                qu.push(x);
                cout << x << " ";
                truoc[x] = q;
            }
        }
    }
}
void findWay(int begin, int end){
    if(truoc[begin] == 0) cout << -1 << endl;
    else{
        int u = truoc[end];
        while(u != begin){
            cout << u << " ";
            u = truoc[u];
        }
        cout << begin << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(truoc, 0, sizeof(truoc));
        memset(chuaXet, true, sizeof(chuaXet));
        for(int i = 1; i <= v; i++) ds[i].clear();
        cin >> v >> e >> s >> t;
        for(int i = 1; i <= e; i++){
            int n, m;
            cin >> n >> m;
            ds[n].push_back(m);
            ds[m].push_back(n);
        }
        // findWay(s, t);
    }
    return 0;
}
