#include <bits/stdc++.h>
#define ll long long
using namespace std;
int priority(char c){
    if(c == '(') return 0;
    else if(c == '+' || c == '-') return 1;
    return 2;
}
ll solve(int a, int b, char c){
    if(c == '+') return a + b;
    else if(c == '-') return a - b;
    else if(c == '*') return a * b;
    return a / b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<ll> res;
        stack<char> sig;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                ll tmp = 0;
                while(i < s.length() && isdigit(s[i])){
                    tmp = tmp*10 + s[i]-'0';
                    i++;
                }
                res.push(tmp);
                i--;
            }
            else if(s[i] == '(') sig.push(s[i]);
            else if(s[i] == ')'){
                while(!sig.empty() && sig.top() != '('){
                    char dau = sig.top(); sig.pop();
                    ll s1 = res.top(); res.pop();
                    ll s2 = res.top(); res.top();
                    res.push(solve(s2, s1, sig.top()));
                    sig.pop();
                }
                sig.pop();
            }else{
                while(!sig.empty() && priority(sig.top()) >= priority(s[i])){
                    char dau = sig.top(); sig.pop();
                    ll s1 = res.top(); res.pop();
                    ll s2 = res.top(); res.top();
                    res.push(solve(s2, s1, sig.top()));
                    sig.pop();
                }
                sig.push(s[i]);
            }
        }
        while(!sig.empty()){
            char dau = sig.top(); sig.pop();
            ll s1 = res.top(); res.pop();
            ll s2 = res.top(); res.top();
            res.push(solve(s2, s1, sig.top()));
            sig.pop();
        }
        cout << res.top() << endl;
    }
    return 0;
}