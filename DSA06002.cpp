#include <bits/stdc++.h>
using namespace std;
int n, k;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(abs(a.first-k) == abs(b.first-k)) return a.second < b.second;
    return abs(a.first-k) < abs(b.first-k);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; i++){
            cin >> vp[i].first;
            vp[i].second = i;
        }
        sort(vp.begin(), vp.end(), cmp);
        for(auto x : vp) cout << x.first << " ";
        cout << endl;

        
    }
    return 0;
}