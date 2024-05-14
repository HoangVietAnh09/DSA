#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1004];
vector<int> v;
vector<vector<int>> res;
void backTrack(int i){
    if(v.size() == k){
        res.push_back(v);
    }
    for(int j = i; j <= n; j++){
        v.push_back(a[j]);
        backTrack(j+1);
        v.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        v.clear();
        res.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        backTrack(1);
        for(auto x : res){
            for(auto i : x){
                cout << i << " ";
            }
            cout << endl;
        }

    }
    return 0;
}