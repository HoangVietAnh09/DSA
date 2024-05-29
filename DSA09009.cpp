#include <bits/stdc++.h>
using namespace std;
int v, e, x, y;
vector<int> ds[1004];
bool chuaXet[1004];
void bfs(int s){
    queue<int> qu;
    qu.push(s);
    chuaXet[s] = false;
    while(!qu.empty()){
        int q = qu.front();
        qu.pop();
        for(auto x : ds[q]){
            if(chuaXet[x]){
                chuaXet[x] = false;
                qu.push(x);
            }
        }
    }
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
            ds[y].push_back(x);
        }
        int res = 0;
        for(int i = 1; i <= v; i++){
            if(chuaXet[i]){
                res++;
                bfs(i);
            }
        }
        cout << res << endl;
    }
    return 0;
}