#include <bits/stdc++.h>
using namespace std;
int n;
string a;
vector<string> res;
void backTrack(int i, string s){
    for(int j = 0; j <= 1; j++){
        if(j == 0) s.push_back(a[i]);
        if(i == n-1){
            res.push_back(s);
        }else{
            backTrack(i+1, s);
        }
        if(j == 0) s.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear();
        cin >> n >> a;
        backTrack(0, "");
        sort(res.begin(), res.end());
        for(auto x : res){
            cout << x << " ";
        }
        cout << endl;


    }
    return 0;
}