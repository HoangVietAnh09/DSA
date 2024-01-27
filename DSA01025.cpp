#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004];
vector<char> v;
void in(){
    for(int i = 1; i <= k; i++){
        cout << v[a[i]];
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        set<char> s;
        for(int i = 0; i < 26; i++) s.insert((char)(i+65));
        v.push_back('0');
        for(auto x : s) v.push_back(x);
        a[0] = 0;
        backTrack(1);
    }
    return 0;
}