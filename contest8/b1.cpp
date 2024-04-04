#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        vector<string> res; 
        qu.push("6");
        qu.push("8");
        int l = 0;
        while(l <= n){
            string tmp = qu.front();
            qu.pop();
            res.push_back(tmp);
            qu.push(tmp + "6");
            qu.push(tmp + "8");
            l = qu.front().length();
        }
        cout << res.size() << endl;
        for(string s : res) cout << s << " ";
        cout << endl;
    }
}