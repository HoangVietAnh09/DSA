#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("C:\\Users\\Admin\\Documents\\Code\\C++\\test.txt", "r", stdin);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<string> st;
        stringstream ss(s);
        string token;
        while(ss >> token){
            st.push(token);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;   
    }
    return 0;
}
