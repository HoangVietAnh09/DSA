#include <bits/stdc++.h>
using namespace std;
vector<string> res;
bool dx(string s){
    int l = 0, r = s.length()-1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}
bool check(string s){
    if(s.length()%2 != 0) return false;
    if(!dx(s)) return false;
    return true;
    
}
int main(){
    int t;
    cin >> t;
    queue<string> qu;
    int l = 0;
    while(l <= 1004){
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
        for(int i = 0; i < res.size(); i++){
            if(check(res[i]))
                cout << res[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}