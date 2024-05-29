#include <bits/stdc++.h>
using namespace std;
int v, e, x, y;
vector<int> ds[1004];
bool chuaXet[1004];
void dfs(int s){
    stack<int> st;
    st.push(s);
    chuaXet[s] = false;
    while(!st.empty()){
        int u = st.top();
        st.pop();
        for(auto x : ds[u]){
            if(chuaXet[x]){
                chuaXet[x] = false;
                st.push(u);
                st.push(x);
                break;
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
                dfs(i);
            }
        }
        cout << res << endl;
    }
}