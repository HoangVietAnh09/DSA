#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    vector<int> jump(n, 0);
    stack<int> s;
    for(int i = n-1; i >= 0; i--){
        while(!s.empty() && h[i] >= h[s.top()]) s.pop();
        if(!s.empty()) jump[i] = jump[s.top()] + 1;
        s.push(i);
    }
    while(q--){
        int st;
        cin >> st;
        cout << jump[st-1] << endl;
    }
}