#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> si;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                si.push(s[i]-'0');
            }else{
                int a = si.top(); si.pop();
                int b = si.top(); si.pop();
                if(s[i] == '*'){
                    si.push(a*b);
                }else if(s[i] == '/'){
                    si.push(b/a);
                }else if(s[i] == '+'){
                    si.push(a+b);
                }else if(s[i] == '-'){
                    si.push(b-a);
                }
            }
        }
        cout << si.top() << endl;
    }
    return 0;
}