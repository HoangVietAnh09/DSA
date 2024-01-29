#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("C:\\Users\\Admin\\Documents\\Code\\C++\\test.txt", "r", stdin);
    int q, x;
    string s;
    cin >> q;
    stack<int> st;
    while(q--){
        cin >> s;
        if(s == "PUSH"){
            cin >> x;
            st.push(x);
        }else if(s == "POP"){
            if(!st.empty()){
                st.pop();
            }
        }else if(s == "PRINT"){
            if(st.empty()) cout << "NONE\n";
            else cout << st.top() << endl;
        }
    }
    return 0;
}
