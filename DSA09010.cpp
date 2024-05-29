#include <bits/stdc++.h>
using namespace std;
int v, e, x, y;
vector<int> ds[1004];
bool chuaXet[1004];
int bfs(int s){
    int cnt = 0;
    queue<int> qu;
    qu.push(s);
    chuaXet[s] = false;
    while(!qu.empty()){
        int q = qu.front();
        qu.pop();
        cnt++;
        for(auto x : ds[q]){
            if(chuaXet[x]){
                qu.push(x);
                chuaXet[x] = false;
            }
        }
    }
    return cnt;
}
bool StrongConnection(){
    memset(chuaXet, true, sizeof(chuaXet));
    for(int i = 1; i <= v; i++){
        if(bfs(i) != v) return false;
        else
            memset(chuaXet, true, sizeof(chuaXet));
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i = 0; i < 1004; i++) ds[i].clear();
        memset(chuaXet, true, sizeof(chuaXet));
        cin >> v >> e;
        for(int i = 1; i <= e; i++){
            cin >> x >> y;
            ds[x].push_back(y);
        }
        if(StrongConnection()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}