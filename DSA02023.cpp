#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004];
set<string> s;
vector<string> vs;
void nhap(){
	cin >> n >> k;
	a[0] = 0;
	for(int i = 0; i < n; i++){
		string x;
		cin >> x;
		s.insert(x);
	}
	vs.push_back("tmp");
	for(string x : s){
		vs.push_back(x);
	}
}
void in(){
	for(int i = 1; i <= k; i++){
		cout << vs[a[i]] << " ";
	}
	cout << endl;
}
void backTrack(int i){
	int n = s.size();
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k) in();
		else backTrack(i+1);
	}
}
int main(){
//	freopen("C:\\Users\\Admin\\Documents\\C++\\test.txt", "r", stdin);
	nhap();
	backTrack(1);
	return 0;
}
