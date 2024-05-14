#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sl(int a[], int n, int l[]){
    stack<int> st;
    for(int i = n-1; i >= 0; i--){
        while(st.size() && a[i] < a[st.top()]){
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        l[st.top()] = -1;
        st.pop();
    }
}
void sr(int a[], int n, int r[]){
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(st.size() && a[i] < a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()] = n;
        st.pop();
    }
}
int main(){
    int t = 1;
    while(t--){
        int m, n;
        cin >> m >> n;
        int a[n], l[n], r[n], b[n], l1[n], r1[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = m-a[i];
        }
        sl(a, n, l);
        sr(a, n, r);
        sl(b, n, l1);
        sr(b, n, r1);
        ll res1 = 0, res2 = 0;
        for(int i = 0; i < n; i++){
            int tmp = r[i]-l[i]-1;
            ll s = 1ll*a[i]*tmp;
            res1 = max(res1, s);
        }
        for(int i = 0; i < n; i++){
            int tmp = r1[i]-l1[i]-1;
            ll s = 1ll*b[i]*tmp;
            res2 = max(res2, s);
        }
        cout << max(res1, res2);
    }
    return 0;
}