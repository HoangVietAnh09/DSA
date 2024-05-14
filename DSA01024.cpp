#include <bits/stdc++.h>
using namespace std;
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
    return 0;
}