#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v(s.begin(), s.end());
        // cout << v.size();
        if(v.size() < 2) cout << -1 << endl;
        else cout << v[0] << " " << v[1] << endl;

    }
    return 0;
}