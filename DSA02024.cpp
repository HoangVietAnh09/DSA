#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
int a[1004] = {0};
void backTrack(int i, string s, int cnt){
    for(int j = i + 1; j <= n; j++){
        if(a[i] < a[j]){
            if(cnt > 0) v.push_back(s + to_string(a[j]) + " ");
            backTrack(j, s + to_string(a[j]) + " ", cnt+1);

        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    backTrack(0, "", 0);
    sort(v.begin(), v.end());
    for(auto x : v) cout << x << endl;
    return 0;
}