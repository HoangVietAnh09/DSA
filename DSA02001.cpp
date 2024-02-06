#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a, b;
void in(){
	int l = a.size();
	cout << "[";
	for(int i = 0; i < l; i++){
		cout << a[i];
		if(i != l-1) cout << " ";
	}
	cout << "]\n";
}
void backTrack(int i){
	in();
	if(i == 1) return;
	for(int j = 0; j < i-1; j++){
		b.push_back(a[j] + a[j+1]);
	}
	a = b;
	a.resize(i-1);
	b.clear();
	backTrack(i-1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		a.resize(n);
		for(int &x : a) cin >> x ;
		backTrack(n);
	}
	return 0;
}
