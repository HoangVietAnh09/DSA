#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int b[n];
		for(int i = 0; i < n; i++){
			b[i] = i + 1;
		}
		int cnt = 0;
		do{
			cnt++;
			if(check(a, b, n)){
				break;
			}
		}while(next_permutation(b, b+n));
		cout << cnt << endl;
	}
	return 0;
}
