#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        stack<char> sc1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') sc1.push(s[i]);
            else sc1.pop();
        }
    }
}