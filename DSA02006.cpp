#include <bits/stdc++.h>
using namespace std;
int n, tar;
vector<int> a, b;
vector<vector<int>> res;

void backTrack(int i, int sum){
	if(sum == tar){
		res.push_back(b);
		return;
	}
	for(int j = i; j < n; j++){
		b.push_back(a[j]);
		backTrack(j+1, sum + a[j]);
		b.pop_back();
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		res.clear();
		a.clear();
		b.clear();
		cin >> n >> tar;
		a.resize(n);
		for(auto &x : a) cin >> x;
		sort(a.begin(), a.end());
		backTrack(0, 0);
		if(res.size() == 0){
			cout << -1 << endl;
		}else{
			for(int i = 0; i < res.size(); i++){
				cout << "[";
				for(int j = 0; j < res[i].size(); j++){
					cout << res[i][j];
					if(j != res[i].size()-1) cout << " ";
				}
				cout << "]";
				if(i != res.size()-1) cout << " ";
			}
			cout << endl;
		}
	
		
	}
	return 0;
}