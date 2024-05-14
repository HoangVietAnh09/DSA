#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    queue<string> Q;
    Q.push("6");
    Q.push("8");
    while(n--){
        string s = Q.front();
        Q.pop();
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        cout << s << tmp << " ";
        Q.push(s + "6");
        Q.push(s + "8");
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}