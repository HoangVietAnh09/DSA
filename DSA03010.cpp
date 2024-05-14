#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue<int, vector<int>, greater<int>> pq;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            pq.push(x);
        }
        ll res = 0;
        while(pq.size() > 1){
            ll t1 = pq.top(); pq.pop();
            ll t2 = pq.top(); pq.pop();
            pq.push(t1+t2);
            res += t1+t2;
        }
        cout << res << endl;
    }
    return 0;
}