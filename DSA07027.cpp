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
        for(int i = 0; i < n; i++){
            if(st.empty()){
                st.push(i);
            }else{
                while(!st.empty() && a[st.top()] < a[i]){
                    res[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            res[st.top()] = -1;
            st.pop();
        }
        for(int x : res) cout << x << " ";
        cout << endl;


    }
    return 0;
}
