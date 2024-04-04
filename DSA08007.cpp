#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int cnt = 0;
        vector<string> res;
        queue<string> qu;
        qu.push("1");
        ll l = 0;
        while(l <= n){
            string s = qu.front();
            qu.pop();
            if(stoll(s) <= n){
                res.push_back(s);
            }
            qu.push(s + "0");
            qu.push(s + "1");
            l = stoll(qu.front());
        }
        cout << res.size() << endl;
    }
    return 0;
}