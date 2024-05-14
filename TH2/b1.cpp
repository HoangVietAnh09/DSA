#include <bits/stdc++.h>
using namespace std;
void replace(string s){
    stack<int> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push(i);
            s[i] = '#';
        }else if(s[i] == ')'){
            if(!st.empty()){
                s[st.top()] = '0';
                s[i] = '1';
                st.pop();
            }else s[i] = '#';
        }
    }
    while(!st.empty()){
        s[st.top()] = '#';
        st.pop();
    }
    for(char x : s){
        if(x == '#') cout << -1;
        else cout << x;
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        replace(s);
        cout << endl;
        
    }
    return 0;
}