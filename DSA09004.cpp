#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<int> List[1004];
bool chuaXet[1004];
void DFS(int u){
    chuaXet[u] = false;
    cout << u << " ";
    for(int x : List[u]){
        if(chuaXet[x]){
            DFS(x);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> v >> e >> u;
        memset(chuaXet, true, sizeof(chuaXet));
        for(int i = 0; i < 1004; i++) List[i].clear();
        for(int i = 1; i <= e; i++){
            int a, b;
            cin >> a >> b;
            List[a].push_back(b);
            List[b].push_back(a);
        }
        DFS(u);
        cout << endl;

    }
    return 0;
}