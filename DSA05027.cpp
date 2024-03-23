#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, v;
        cin >> n >> v;
        int a[104];
        int dp[104][1001];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= v; j++){
                if(j < a[i]) dp[i][j] = dp[i-1][j];
                else dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]]+a[i]);
            }
        }
        cout << dp[n][v];
    }
    return 0;
}