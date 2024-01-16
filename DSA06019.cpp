#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second && a.first < b.first) return true;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> vp(mp.begin(), mp.end());
        sort(vp.begin(), vp.end(), cmp);
        for(auto x : vp){
            for(int i = 0; i < x.second; i++){
                cout << x.first << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}