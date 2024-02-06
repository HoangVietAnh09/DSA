#include <bits/stdc++.h>
using namespace std;
vector<char> vc;
int l, a[10004], used[10004];
string s;
void nhap(){
	cin >> s;
	l = s.length();
	vc.push_back('0');
	for(int i = 0; i < l; i++){
		vc.push_back(s[i]);
	}
	
}
void in(int l){
	for(int i = 1; i <= l; i++){
		cout << vc[a[i]];
	}
	cout << " ";
}
void backTrack(int i, int l){
	for(int j = 1; j <= l; j++){
		if(used[j] == 0){
			used[j] = 1;
			a[i] = j;
			if(i == l) in(l);
			else backTrack(i+1, l);
			used[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		nhap();
		backTrack(1, l);
		cout << endl;
		vc.clear();
				
	}
	return 0;
}
