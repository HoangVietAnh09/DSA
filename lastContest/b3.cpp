#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> v;
int a[1004];
void backTrack(int i, string s, int dem){
    for(int j = i+1; j <= n; j++){
        if(dem > 0 && dem == k-1){
            v.push_back(s + to_string(a[j]));
        }
        backTrack(j, s + to_string(a[j]), dem+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    backTrack(0, "", 0);
    set<string> s(v.begin(), v.end());
    for(auto x : s) cout << x << endl;

    return 0;
}