#include <bits/stdc++.h>
using namespace std;
int n, k, a[100004], b[100004], ok;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());

    vector<pair<int, int>> vp;
    vp.resize(v.size());
    for(int i = 0; i < vp.size(); i++){
        vp[i].first = v[i];
        vp[i].second = i;
    }

    return 0;
}