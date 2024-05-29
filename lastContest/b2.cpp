#include <bits/stdc++.h>
using namespace std;
int n, a[1004];
bool check[1004];
set<vector<int>> res;
vector<int> v;
void backTrack(int i, int cnt){
    if(cnt != 0) res.insert(v);
    for(int j = i; j < n; j++){
        v.push_back(a[j]);
        backTrack(j+1, cnt+1);
        v.pop_back();
    }
}
int main(){
    cin >> n;
    memset(check, true, sizeof(check));
    for(int i = 0; i < n; i++) cin >> a[i];
    backTrack(0, 0);
    for(auto i : res){
        for(auto j : i){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}