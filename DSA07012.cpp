#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> ss;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])){
                ss.push(string(1, s[i]));
            }else{
                string a = ss.top(); ss.pop();
                string b = ss.top(); ss.pop();
                ss.push("(" + b + s[i] + a + ")");
            }
        }
        cout << ss.top() << endl;
    }
    return 0;
}   