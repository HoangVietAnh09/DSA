#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
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

=======
int n, k, a[10004];
vector<string> v;
void in(){
    for(int i = 1; i <= k; i++){
        cout << v[a[i]] << " ";
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = a[i-1] + 1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    set<string> s;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    n = s.size();
    v.push_back("index0");
    for(string x : s) v.push_back(x);
    a[0] = 0;
    backTrack(1);
>>>>>>> 590bf36d269ab37c6884aca4b46a510cf4a03304
    return 0;
}