#include <bits/stdc++.h>
using namespace std;
vector<string> res;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        int l = 0;
        while(l <= n){
            string s;
            if(!qu.empty()){
                s = qu.front();
                qu.pop();
                res.push_back(s);
            }
            qu.push(s + "6");
            qu.push(s + "8");
            l = qu.front().length();
        }
        cout << res.size() << endl;
        for(int i = res.size()-1; i >= 0; i--){
            cout << res[i] << " ";
        }
        cout << endl;
        res.clear();
        
    }
    return 0;
}