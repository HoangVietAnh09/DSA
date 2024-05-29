int parent[1004];
int n;
void make_set(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
}
void find(v){
    if(v == parent[v]) return v;
    return find(parent[v]);
}
int find(v){
    if(v == parent[v]) return  v;
    return parent[v] = find(parent[v]);
    
}
void union(a, b){
    a = find(a);
    b = find(b);
    if(a != b){
        parent[b] = a;
    }
}



***
void init(){
    for(int i = 0; i < n; i++) chuaXet[i] = true;
}
int Find(int u){
    if(u != parent[u])  parent[u] = Find(parent[u]);
    return parent[u];
}
void Union(int u, int v){
    int a = Find(u), b = Find(v);
    if(a == b) return;
    if(num[a] < num[b]) swap(a, b);
    parent[b] = a;
    num[a] += num[b];
}
int main(){
    int t, u, c, i;
    cin >> t;
    while(t--){
        cin >> n >> m;
        init();
        while(m--){
            cin >> u >> v;
            Union(u, v);
        }
        int dem = 0;
        for(int i = 1; i <= n; i++){
            if(i == parent[i]) dem++;
        }
        cout << dem << endl;
    }
}