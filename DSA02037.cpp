#include <bits/stdc++.h>
using namespace std;
int n, a[1004], x[1004];
vector<string> v;
int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}
void backTrack(int i, int sum, int pos, string res){
    if(check(sum)){
        v.push_back(res);
    }
    for(int j = pos; j <= n; j++){
        x[i] = a[j];
        backTrack(i+1, sum + a[j], j+1, res + to_string(a[j]) + " ");
        
    }
}
int main(){
    freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<>());
        backTrack(1, 0, 1, "");
        sort(v.begin(), v.end());
        for(auto x : v) cout << x << endl;
        v.clear();
        cout << endl;
    }
    return 0;
}