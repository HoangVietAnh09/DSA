#include <bits/stdc++.h>
using namespace std;
int a, b, cnt;
bool check[10004];
int x[1004][1004];
vector<int> res;
void backTrack(int i, int j){
	if(i == a && j == b){
		cnt++;
	}
	if(i < a) backTrack(i+1, j);
	if(j < b) backTrack(i, j+1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b;
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= b; j++){
				cin >> x[i][j];
			}
		}
		backTrack(1, 1);
		cout << cnt << endl;
		cnt = 0;
	}
	return 0;
}
