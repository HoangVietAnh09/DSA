#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<ll> a(n), b(m), c(k);
		for(auto &x : a) cin >> x;
		for(auto &x : b) cin >> x;
		for(auto &x : c) cin >> x;
		vector<ll> res;
		int i = 0, j = 0, z = 0;
		while(i < n && j < m && z < k){
			if(a[i] == b[j] && a[i] == c[z]){
				res.push_back(a[i]);
				i++, j++, z++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[z]) j++;
			else z++;
		}
		if(res.empty()) cout << -1;
		else{
			for(ll x : res){
				cout << x << " ";
			}
		}	
		cout << endl;	
	}	
	return 0;
}
