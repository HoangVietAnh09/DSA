#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, s, m;
    cin >> n >> s >> m;
    int lt = s*m;
    int day = s-s/7;
    if(lt > day*n){
        cout << -1;
        return;
    }
    for(int i = 1; i <= day; i++){
        if(lt <= n*i){
            cout << i;
            return;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}