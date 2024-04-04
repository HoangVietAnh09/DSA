#include <bits/stdc++.h>
using namespace std;
int n, x[1004], cot[1004], d1[1004], d2[1004];
int cnt = 0;

void backTrack(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1){
			x[i] = j;
			cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
			if(i == n){
				cnt++;
			}
			else backTrack(i+1);
			cot[j] = d1[i-j+n] = d2[i+j-1] = 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= 100; i++){
			cot[i] = d1[i] = d2[i] = 1;
		}
		backTrack(1);
		cout << cnt << endl;
		cnt = 0;
	}
	
	return 0;
}
