#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		priority_queue<int> pq;
		map<char, int> mp;
		for(int i = 0; i < s.length(); i++){
			mp[s[i]]++;
		}
		for(auto x : mp){
			pq.push(x.second);
		}
		for(int i = 0; i < n; i++){
			int x = pq.top();
			pq.pop();
			x--;
			pq.push(max(x, 0));
		}
		ll res = 0;
		while(!pq.empty()){
			res += pq.top()*pq.top();
			pq.pop();
		}
		cout << res << endl;
	}
	return 0;
}