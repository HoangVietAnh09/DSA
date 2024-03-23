#include <bits/stdc++.h>
using namespace std;
int findMin(string s){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '6'){
            s[i] = '5';
            res = res*10 + (s[i]-'0');
        }else{
            res = res*10 + (s[i]-'0');
        }
    }
    return res;
}
int findMax(string s){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '5'){
            s[i] = '6';
            res = res*10 + (s[i]-'0');
        }else{
            res = res*10 + (s[i]-'0');
        }
    }
    return res;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << findMin(a) + findMin(b) << " " << findMax(a) + findMax(b);

    return 0;
}