#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> vp;
int main(){
    int t;
    cin >> t;
    while(t--){
        int v, e;
        cin >> v >> e;
        vp.clear();
        vp.resize(v+1);
        for(int i = 1; i <= e; i++){
            int x, y;
            cin >> x >> y;
            vp[x].first++;
            vp[y].second++;
        }
        bool check = true;
        for(int i = 1; i <= v; i++){
            if(vp[i].first != vp[i].second){
                check = false;
                break;
            }
        }
        if(check) cout << 1 << endl;
        else cout << 0 << endl;

    }
    return 0;
}