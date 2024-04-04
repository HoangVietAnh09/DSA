#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k, tmp;
set<string> ss;
vector<string> vs;
int a[1004];
void in(){
    for(int i = 1; i <= k; i++){
        cout << vs[a[i]-1] << " ";
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = a[i-1]+1; j <= tmp-k+i; j++){
        a[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        ss.insert(x);
    }
    vs.resize(ss.size());
    vector<string> vs(ss.begin(), ss.end());
    tmp = vs.size();
    backTrack(1);


    return 0;
}