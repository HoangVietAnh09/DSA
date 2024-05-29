#include <bits/stdc++.h>
using namespace std;
int dp[1004][1004];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int w[1004], c[1004];
		for(int i = 1; i <= n; i++) cin >> w[i];
		for(int i = 1; i <= n; i++) cin >> c[i];
		for(int i = 1; i <= n; i++){
			for(int j = 0; j <= v; j++){
				dp[i][j] = dp[i-1][j];
				if(j >= w[i]){
					dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + c[i]);
				}
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}
