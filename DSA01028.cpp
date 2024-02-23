#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004], ok, l;
set<int> s;
void khoiTao(){
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	l = s.size();
}
void sinh(){
	int i = k;
	while(a[i] == l-k+i){
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
	cin >> n >> k;
	khoiTao();
	
	vector<int> v;
	v.push_back(-1);
	for(int x : s){
		v.push_back(x);
	}
	for(int i = 1; i <= l; i++) a[i] = i;
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++) cout << v[a[i]] << " ";
		cout << endl;
		sinh();
	}

    return 0;
}
