#include <bits/stdc++.h>
using namespace std;
vector<int> ds[1004];
bool chuaXet[1004];
void dfs(int s){
    chuaXet[s] = false;
    for(auto x : ds[s]){
        if(chuaXet[s]){
            dfs(x);
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        ds[x].push_back(y);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(chuaXet[i]){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;

}