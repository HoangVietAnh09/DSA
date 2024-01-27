#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    set<string> s;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        s.insert(a);
    }
    vector<string> v(s.begin(), s.end());
    vector<pair<string, int>> vp;
    vp.resize(v.size());
    for(int i = 0; i < v.size(); i++){
        vp[i].first = v[i];
        vp[i].second = i;
    }
    for(int i = 0; i < vp.size(); i++){
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    return 0;
}