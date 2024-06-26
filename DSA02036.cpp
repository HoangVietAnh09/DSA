#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> res;
vector<int> v;
int a[1004];
void backTrack(int i, int sum){
    if(sum%2 != 0) res.push_back(v);
    for(int j = i; j <= n; j++){
        v.push_back(a[j]);
        backTrack(j+1, sum + a[j]);
        v.pop_back();
    }
}
int main(){;
    int t;
    cin >> t;
    while(t--){
        v.clear();
        res.clear();
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<>());
        backTrack(1, 0);
        sort(res.begin(), res.end());
        for(auto x : res){
            for(auto i : x){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    

    return 0;
}