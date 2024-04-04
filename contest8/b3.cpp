#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> qu;
        vector<string> res;
        qu.push("1");
        while(qu.size() != 0){
            string tmp = qu.front();
            qu.pop();
            if(stoll(tmp)%n == 0){
                cout << tmp;
                break;
            }
            qu.push(tmp + "0");
            qu.push(tmp + "1");
        }
        cout << endl;
    }
}