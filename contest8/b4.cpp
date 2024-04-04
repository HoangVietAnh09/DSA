#include <bits/stdc++.h>
using namespace std;
void rev(string s){
    string t = s;
    reverse(s.begin(), s.end());
    cout << t << s << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        qu.push("6");
        qu.push("8");
        while(n--){
            string tmp = qu.front();
            qu.pop();
            rev(tmp);
            qu.push(tmp + "6");
            qu.push(tmp + "8");
        }
        cout << endl;
    }
}