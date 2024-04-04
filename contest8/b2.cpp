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
        qu.push("4");
        qu.push("5");
        while(n--){
            string tmp = qu.front();
            qu.pop();
            rev(tmp);
            qu.push(tmp + "4");
            qu.push(tmp + "5");
        }
        cout << endl;
    }
}