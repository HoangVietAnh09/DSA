#include <bits/stdc++.h>
using namespace std;
int n, a[1004][1004];
string res = "";
bool check = true;
void backTrack(int i, int j){
    if(i == n && j == n){
        check = false;
        cout << res << " ";
    }
    if(i+1 <= n && a[i+1][j] == 1){
        a[i+1][j] = 0;
        res += "D";
        backTrack(i+1, j);
        res.pop_back();
        a[i+1][j] = 1;
    }
    if(i-1 > 0 && a[i][j-1] == 1){
        a[i][j-1] = 0;
        res += "L";
        backTrack(i, j-1);
        res.pop_back();
        a[i][j-1] = 1;
    }
    if(j+1 <= n && a[i][j+1] == 1){
        a[i][j+1] = 0;
        res += "R";
        backTrack(i, j+1);
        res.pop_back();
        a[i][j+1] = 1;
    }
    if(i-1 > 0 && a[i-1][j] == 1){
        a[i-1][j] = 0;
        res += "U";
        backTrack(i-1, j);
        res.pop_back();
        a[i-1][j] = 1;
    }
    
}
int main(){
    // freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        if(a[1][1] && a[n][n]){
            a[1][1] = 0;
            backTrack(1, 1);
        }
        if(check) cout << -1;
        res = "";
        check = true;
        cout << endl;

    }
    return 0;
}