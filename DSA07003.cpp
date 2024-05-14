#include <bits/stdc++.h>
using namespace std;
void process(){
    string s; getline(cin, s);
    stack<char> st;
    for(char x : s){
        if(x != ')') st.push(x);
        else{
            bool ok = false;
            while(!st.empty()){
                char c = st.top();
                st.pop();
                if(c == '+' || c == '-' || c == '*' || c == '/') ok = true;
                if(c == '(') break;
            }
            if(!ok){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("C:\\Users\\Admin\\Documents\\Code\\C++\\test.txt", "r", stdin);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        process();
    }
    return 0;
}
