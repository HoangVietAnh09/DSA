#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("testcase.txt", "r", stdin);
    int q;
    cin >> q;
    deque<int> dq;
    while(q--){
        cin.ignore();
        string s;
        cin >> s;
        if(s == "PUSHFRONT"){
            int x; cin >> x;
            dq.push_front(x);
        }else if(s == "PRINTFRONT"){
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.front() << endl;
        }else if(s == "POPFRONT"){
            if(!dq.empty())
                dq.pop_front();
        }else if(s == "PUSHBACK"){
            int x; cin >> x;
            dq.push_back(x);
        }else if(s == "PRINTBACK"){
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.back() << endl;
        }else if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
    }
    return 0;
}