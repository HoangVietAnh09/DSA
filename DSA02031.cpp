#include <bits/stdc++.h>
using namespace std;
char c;
string s;
int a[1004];
bool nguyenAm(char c){
    if(c != 'A' && c != 'E') return true;
    return false;
}
void in(){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A' || s[i] == 'E'){
            if(i > 0 && i < s.length()-1 && nguyenAm(s[i-1]) && nguyenAm(s[i+1])) return;
        }
    }
    cout << s << endl;
}
void backTrack(char i){
    for(char j = 'A'; j <= c; j++){
        if(!a[j]){
            a[j] = 1;
            s.push_back(j);
            if(s.length() == c-'A'+1) in();
            else backTrack(i+1);
            a[j] = 0;
            s.pop_back();
        }
    }
}
int main(){
    cin >> c;
    backTrack('A');

    return 0;
}