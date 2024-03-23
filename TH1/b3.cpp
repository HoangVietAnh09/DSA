#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
int a[1004];
void backTrack(int i, string s, int dem){
    for(int j = i+1; j <= n; j++){
        if(a[i] < a[j]){
            if(dem > 0){
                v.push_back(s + to_string(a[j]) + " ");
            }
            backTrack(j, s + to_string(a[j]) + " ", dem+1);
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    backTrack(0, "", 0);
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}