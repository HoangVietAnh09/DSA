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
        int a[n], b[m];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        sort(a, a+n);
        sort(b, b+m);
        map<int, int> mp;
        set<int> s;
        for(int i = 0; i < n; i++){
            mp[a[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            s.insert(b[i]);
        }
        for(auto x : s) cout << x << " ";
        cout << endl;
        for(int i = 0; i < m; i++){
            if(mp[b[i]] == 1){
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}