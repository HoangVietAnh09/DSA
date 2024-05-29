#include <bits/stdc++.h>
using namespace std;
int dp[1004][1004];

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int l1 = s1.length();
		int l2 = s2.length();
		for(int i = 0; i <= l1; i++) dp[i][0] = 0;
		for(int i = 0; i <= l2; i++) dp[0][i] = 0;
		for(int i = 1; i <= l1; i++){
			for(int j = 1; j <= l2; j++){
				if(s1[i-1] == s2[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}else{
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
			
		}
		cout << dp[l1][l2] << endl;
	}
	return 0;
}