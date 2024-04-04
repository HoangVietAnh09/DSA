#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
int a[1004], x[1004];
void backTrack(int i, int sum, string res){
    for(int j = i; j <= n; j++){
        sum += a[j];
        res += to_string(a[j]) + " ";
        if(sum%2 != 0) v.push_back(res);
        else backTrack(i+1, sum + a[j], res);
        sum -= a[j];
    }
}
int main(){
    freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<>());
        backTrack(1, 1, 0);
    }
    

    return 0;
}