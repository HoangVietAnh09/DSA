#include <bits/stdc++.h>
using namespace std;
int a[1001][1001], c[1001][1001], n, m;
void solve(){
    int x, f, s;
    memset(c, -1, sizeof(c));
    queue<pair<int, int>> qp;
    qp.push({1, 1});
    c[1][1] = 0;
    while(!qp.empty()){
        pair<int, int> p = qp.front();
        f = p.first, s = p.second;
        x = a[f][s];
        qp.pop();
        if(c[f][s+x] == -1){
            qp.push({f, s+x});
        }
        if(c[f+x][s] == -1){
            qp.push({f+x, s});
        }
        if(c[n][m] != -1) break;
    }
    cout << c[n][m] << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        solve();
    }
    return 0;
}