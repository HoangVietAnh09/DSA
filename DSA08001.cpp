#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        queue<int> qu;
        while(q--){
            int n;
            cin >> n;
            if(n == 1){
                cout << qu.size() << endl;
            }else if(n == 2){
                (qu.empty()) ? cout << "YES\n" : cout << "NO\n";
            }else if(n == 3){
                int m; cin >> m;
                qu.push(m);
            }else if(n == 4){
                if(!qu.empty()){
                    qu.pop();
                }
            }else if(n == 5){
                if(qu.empty()) cout << "-1\n";
                else cout << qu.front() << endl;
            }else if(n == 6){
                if(qu.empty()) cout << "-1\n";
                else cout << qu.back() << endl;
            }
        }
    }
    return 0;
}