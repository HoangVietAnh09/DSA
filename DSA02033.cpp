#include <bits/stdc++.h>
using namespace std;
int n;
int check[1004];
string s;
bool test(string s){
    for(int i = 0; i < s.length()-1; i++){
        if(abs(stoi(string(1, s[i])) - stoi(string(1, s[i+1]))) == 1) return false;
    }
    return true;
}
void in(){
    if(!test(s)) return;
    cout << s << endl;
}
void backTrack(int i){
    for(int j = 1; j <= n; j++){
        if(!check[j]){
            check[j] = 1;
            s += to_string(j);
            if(s.length() == n) in();
            else backTrack(i+1);
            check[j] = 0;
            s.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        s = "";
        cin >> n;
        backTrack(1);

    }
}