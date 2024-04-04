#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '2') cnt++;
        else cnt--;
    }
    if(cnt > 0 && s[0] != '0') return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        qu.push("0");
        qu.push("1");
        qu.push("2");
        int l = 0;
        while(l < n){
            string tmp = qu.front();
            qu.pop();
            if(check(tmp)){
                cout << tmp << " ";
                l++;
            }
            qu.push(tmp + "0");
            qu.push(tmp + "1");
            qu.push(tmp + "2");
        }
        cout << endl;
    }
}