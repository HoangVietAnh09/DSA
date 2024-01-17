#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v(n+m);
        for(int i = 0; i < n+m; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}