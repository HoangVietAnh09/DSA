#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        stack<char> sc;
        int open = 0, close = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open++;
                sc.push(s[i]);
            }else{
                if(!sc.empty() && sc.top() == '('){
                    open--;
                    sc.pop();
                }else{
                    close++;
                    sc.push(s[i]);
                }
            }
        }
        int res = open/2 + close/2;
        res += open%2 + close%2;
        cout << res << endl;
    }
}