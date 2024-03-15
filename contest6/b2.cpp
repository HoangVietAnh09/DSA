#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int f[10004];
    int n = s.size();
    f[1] = 1;
    f[0] = 1;
    for(int i = 2; i <=n; i++){
        f[i] = 0;
        if(s[i-1] > '0') f[i] += f[i-1];
        
    }

    return 0;
}