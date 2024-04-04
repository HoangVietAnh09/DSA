#include <bits/stdc++.h>
using namespace std;
int priority(char c){
    if(c == '(') return 0;
    else if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    return 3;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string res = "";
        stack<char> sc;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])) res += s[i];
            else if(s[i] == '(') sc.push(s[i]);
            else if(s[i] == ')'){
                while(!sc.empty() && sc.top() != '('){
                    res += sc.top();
                    sc.pop();
                }
                sc.pop();
            }else{
                while(!sc.empty() && priority(sc.top()) >= priority(s[i])){
                    res += sc.top();
                    sc.pop();
                }
                sc.push(s[i]);
            }
        }
        while(!sc.empty()){
            res += sc.top();
            sc.pop();
        }
        cout << res << endl;

    }
    return 0;
}