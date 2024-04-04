#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        qu.push("9");
        while(qu.size() != 0){
            string s = qu.front();
            qu.pop();
            if(stoll(s)%n == 0){
                cout << s << endl;
                break;
            }
            qu.push(s + "0");
            qu.push(s + "9");
        }
    }
}