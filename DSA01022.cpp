#include <bits/stdc++.h>
using namespace std;
int n, b[100004];
vector<int> a;
vector<vector<int>> v;
bool check(int n){
    for(int i = 0; i < n; i++){
        
    }
}

void backTrack(int i){
    for(int j = 1; j <= n; j++){
        a[i] = j;
        if(i == n){
            v.push_back(a);
        }
        else backTrack(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> b[i];
        a.push_back(-1);
        backTrack(1);


    }
    return 0;
}