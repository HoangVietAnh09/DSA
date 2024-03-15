#include <bits/stdc++.h>
using namespace std;
bool f[10004][10004];
int n;
int qhd(string s){
    int n = s.size(), ans = INT_MIN;
    memset(f, false, sizeof(f));
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j <= n-1; j++){
            if(i == j) f[i][j] = true;
            else if(s[i] == s[j]){
                if(j - i == 1) f[i][j] = true;
                else f[i][j] = f[i+1][j-1];
            }
            if(f[i][j]) ans = max(ans, j-i+1);
        }
    }
    return ans;
}
int main(){
    return 0;
}