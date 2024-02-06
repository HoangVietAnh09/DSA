#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004], b[10004], ok;
bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
void khoiTao(){
	for(int i = 1; i <= k; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n-k+i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1]+1;
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++) cin >> b[i];
		khoiTao();
		ok = 1;
		int cnt = 0;
		while(ok){
			cnt++;
			if(check()){
				cout << cnt << endl;
				break;
			}
			sinh();
		}
	}
	return 0;
}
