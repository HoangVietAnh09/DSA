#include <bits/stdc++.h>
using namespace std;
int n, a[1004];
vector<vector<int>> res;
vector<int> v;
bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}
void backTrack(int i, int sum){
    if(prime(sum)){
        res.push_back(v);
    }
    for(int j = i; j <= n; j++){
        v.push_back(a[j]);
        backTrack(j+1, sum + a[j]);
        v.pop_back();
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear();
        v.clear();
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<>());
        backTrack(1, 0);
        sort(res.begin(), res.end());
        for(auto x : res){
            for(int i : x){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}