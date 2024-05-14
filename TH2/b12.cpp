#include <bits/stdc++.h>
using namespace std;
const int maxn=100004;
int parent[maxn];
int r[maxn];

int find(int u){
    if(u != parent[u])
        parent[u] = find(parent[u]);
    return parent[u];
}
void uni(int u, int v){
    int up = find(u);
    int vp = find(v);
    if(up == vp) return;
    if(r[up] > r[vp]) parent[vp] = up;
    else if(r[up] < r[vp]) parent[up] = vp;
    else{
        parent[up] = vp;
        r[vp]++;
    }
}
bool check(int u, int v){
    return find(u) == find(v);
}
int main(){
    int q;
    cin >> q;
    for(int i = 1; i < maxn; i++){
        parent[i] = i;
        r[i] = 0;
    }    
    for(int i = 0; i < q; i++){
        int x, y, z;
        cin >> x >> y >> z;
        if(z == 1) uni(x, y);
        else{
            if(check(x, y)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}