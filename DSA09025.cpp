#include <bits/stdc++.h>
using namespace std;
int v, e, st, en;
vector<int> List[1004];
bool chuaXet[1004];
bool check;
string res;
void DFS(int u, string s){
    chuaXet[u] = false;
    for(auto v : List[u]){
        if(chuaXet[v]){
            if(v == en){
                check = true;
                res += s + " " + to_string(v);
            }
            DFS(v, s + " " + to_string(v));
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> v >> e >> st >> en;
        res = "";
        check = false;
        memset(chuaXet, true, sizeof(chuaXet));
        for(int i = 0; i < 1004; i++) List[i].clear();
        for(int i = 1; i <= e; i++){
            int a, b;
            cin >> a >> b;
            List[a].push_back(b);
        }
        DFS(st, to_string(st));
        if(!check) cout << -1 << endl;
        else cout << res << endl;

    }
    return 0;
}