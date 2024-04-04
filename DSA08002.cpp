#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("testcase.txt", "r", stdin);
    int q;
    cin >> q;
    queue<int> qu;
    while(q--){
        cin.ignore();
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            qu.push(x);
        }else if(s == "PRINTFRONT"){
            if(qu.empty()){
                cout << "NONE\n";
            }else{
                cout << qu.front() << endl;
            }
        }else if(s == "POP"){
            if(!qu.empty()){
                qu.pop();
            }
        }


    }
    return 0;
}