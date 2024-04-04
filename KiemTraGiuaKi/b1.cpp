#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> v;
int a[1004];
void backTrack(int i, string s, int dem){
    for(int j = i+1; j <= n; j++){
        if(a[i] < a[j]){
            if(dem > 0 && dem == k-1){
                v.push_back(s + to_string(a[j]) + " ");
            }
            backTrack(j, s + to_string(a[j]) + " ", dem+1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    backTrack(0, "", 0);
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        // if(v[i].length() == 2*k){
            cout << v[i] << endl;
        // }
    }

    return 0;
}