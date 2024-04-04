#include <bits/stdc++.h>
using namespace std;
int n, p, s;
int x[1004];
vector<int> prime;
vector<vector<int>> res;
int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}
void backTrack(int i, int sum, int pos){
    if(i == n && sum == s){
        vector<int> tmp(x, x+n);
        res.push_back(tmp);
    }
    for(int j = pos; j <= prime.size(); j++){
        if(sum + prime[j] <= s){
            x[i] = prime[j];
            backTrack(i+1, sum + prime[j], j+1);

        }
    }
}
int main(){
    freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        res.clear();
        prime.clear();
        cin >> n >> p >> s;
        for(int i = p; i <= s; i++){
            if(check(i)) prime.push_back(i);
        }
        backTrack(0, 0, 0);
        cout << res.size() << endl;
        for(auto x : res){
            for(auto i : x){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}