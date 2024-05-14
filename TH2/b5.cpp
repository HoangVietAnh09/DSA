#include <bits/stdc++.h>
using namespace std;
#define ll long long
int tinh(ll x, ll y, char o){
    if(o == '+') return x + y;
    else if(o == '-') return x - y;
    else if(o == '*') return x*y;
    else if(o == '/') return x/y;
}
void tienTo(string s){
    stack<string> ss;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])){
                ss.push(string(1, s[i]));
            }else{
                string a = ss.top(); ss.pop();
                string b = ss.top(); ss.pop();
                ss.push(s[i] + b + a);
            }
        }
        cout << ss.top() << endl;
}
void hauTo(string s){
    stack<ll> st;;
    for(int i = 0; i < s.length(); i++){
        if((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') && (s[i+1] == ' ' || i == s.length()-1)){
            ll y = st.top(); st.top();
            ll x = st.top(); st.pop();
            ll z = tinh(x, y, s[i]);
            st.push(z);
        }else if((s[i] == '-') && isdigit(s[i+1])){
            ll tmp = 0;
            i++;
            while(i < s.length() && isdigit(s[i])){
                tmp = tmp*10 + s[i]-'0';
                i++;
            }
            tmp *= -1;
            st.push(tmp);
        }
    }
    cout << st.top();
}

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       cin.ignore();
       string s;
       getline(cin, s);
       if((s[0] == '-' && isdigit(s[1])) || isdigit(s[0])) hauTo(s);
       else tienTo(s);

    }
    return 0;
}