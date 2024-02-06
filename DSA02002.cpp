#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a, b;
vector<vector<int>> c;
void backTrack(int i){
	if(i == 1) return;
	for(int j = 0; j < i-1; j++){
		b.push_back(a[j] + a[j+1]);
	}
	a = b;
	a.resize(i-1);
	c.push_back(a);
	b.clear();
	backTrack(i-1);
}
void in(){
	for(int i = c.size()-1; i >= 0; i--){
		cout << "[";
		for(int j = 0; j < c[i].size(); j++){
			cout << c[i][j];
			if(j != c[i].size()-1) cout << " ";
		}
		cout << "]";
		if(i != 0) cout << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		a.resize(n);
		for(int &x : a) cin >> x ;
		c.push_back(a);
		backTrack(n);
		in();
		cout << endl;
		c.clear();
	}
	return 0;
}
