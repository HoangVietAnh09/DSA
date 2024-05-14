#include <bits/stdc++.h>
using namespace std;
int n;
int check[1004];
string s;
vector<string> vs;
bool test(string s){
    for(int i = 0; i < s.length()-1; i++){
        if(abs(stoi(string(1, s[i])) - stoi(string(1, s[i+1]))) == 1) return false;
    }
    return true;
}
void add(){
    if(test(s)){
        vs.push_back(s);
    }
}
void backTrack(int i){
    for(int j = 1; j <= n; j++){
        if(!check[j]){
            check[j] = 1;
            s += to_string(j);
            if(i == n) add();
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
        vs.clear();
        s = "";
        cin >> n;
        backTrack(1);
        for(auto x : vs){
            cout << x << endl;
        }
    }
}