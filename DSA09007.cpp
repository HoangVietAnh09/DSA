#include <bits/stdc++.h>
using namespace std;
int v, e, s, t;
vector<int> List[10004];
bool chuaXet[10004];
int truoc[10004];
void BFS(int u){
    queue<int> qu;
    qu.push(u);
    chuaXet[u] = false;
    while(!qu.empty()){
    	int q = qu.front();
    	qu.pop();
    	for(auto x : List[q]){
    		if(chuaXet[x]){
    			chuaXet[x] = false;
    			truoc[x] = q;
    			qu.push(x);
			}
		}
	}
}
int main(){
    int T;
    cin >> T;
    while(T--){
        cin >> v >> e >> s >> t;
        memset(chuaXet, true, sizeof(chuaXet));
        for(int i = 0; i < 1004; i++) List[i].clear();
        for(int i = 1; i <= e; i++){
            int a, b;
            cin >> a >> b;
            List[a].push_back(b);
            List[b].push_back(a);
        }
        BFS(s);
        if(chuaXet[t]) cout << -1 << endl;
        else{
        	vector<int> path;
        	while(t != s){
        		path.push_back(t);
        		t = truoc[t];
			}
			path.push_back(s);
			reverse(path.begin(), path.end());
			for(int x : path) cout << x << " ";
			cout << endl;
		}
    }
    return 0;
}
