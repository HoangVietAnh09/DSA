#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, char> a, pair<int, char> b){
    return a.first > b.first;
}
bool check(string s, int d){
    int n = s.length();
    int a[255] = {0};
    for(int i = 0; i < n; i++){
        a[s[i]]++;
    }
    vector<int> v;
    for(int i = 0; i < 256; i++){
        if(a[i]){
            v.push_back(a[i]);
        }
        sort(v)
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int l = s.length();
        bool check[l];
        memset(check, true, sizeof(check));
        map<char, int> mp;
        for(auto x : s){
            mp[x]++;
        }
        for(auto x : mp){
            int index = 0;
            for(int i = 0; i < x.second; i++){
                s[index] = x.first;
                index += n;
            }   
        }
       
        
    }
    return 0;
}