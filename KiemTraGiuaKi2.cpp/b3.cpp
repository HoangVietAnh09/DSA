#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1004][1004];
vector<int> v;
int last = -1e6;
void backTrack(int i, int j, int res, int last){
    if(i == n && j == m){
        v.push_back(res);
    }
    
    if(i < n && res > last){
        backTrack(i+1, j, res + a[i+1][j], res);
    }
    if(j < m && res > last){
        backTrack(i, j+1, res + a[i][j+1],  res);
    }
}
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    backTrack(1, 1, a[1][1], -1e6);
    int r = *max_element(v.begin(), v.end());
    cout << r;
    return 0;
}