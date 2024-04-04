#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        qu.push("1");
        while(n--){
            string s = qu.front();
            cout << s << " ";
            qu.pop();
            qu.push(s + "0");
            qu.push(s + "1");
        }
        cout << endl;
    }
}