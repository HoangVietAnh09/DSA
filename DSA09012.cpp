#include <bits/stdc++.h>
using namespace std;
int v, e, x, y;
vector<int> ds[1004];
bool chuaXet[1004];
int bfs(int s){
    queue<int> qu;
    int cnt = 0;
    qu.push(s);
    chuaXet[s] = false;
    while(!qu.empty()){
        int q = qu.front();
        qu.pop();
        cnt++;
        for(auto x : ds[q]){
            if(chuaXet[x]){
                chuaXet[x] = false;
                qu.push(x);
            }
        }
    }
    return cnt;
}
void dinhTru(){
    memset(chuaXet, true, sizeof(chuaXet));
    for(int i = 1; i <= v; i++){
        chuaXet[i] = false;
        if(i == 1){
            if(bfs(2) != v-1){
                cout << i << " ";
            }
        }else{
            if(bfs(1) != v-1){
                cout << i << " ";
            }
        }
        memset(chuaXet, true, sizeof(chuaXet));
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
        dinhTru();
        cout << endl;
        
    }
    return 0;
}