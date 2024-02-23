#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), res(n);
        stack<int> st;
        for(int &x : a) cin >> x;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= a[i]) st.pop();
            if(st.empty()) res[i] = -1;
            else res[i] = st.top();
            st.push(a[i]);
        }

    }
    return 0;
}
