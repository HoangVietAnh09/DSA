#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int res[10004];
    int cnt = 1;
    for(int i = 0; i < s.length(); i++){
        res[i] = 0;
        for(int j = 0; j < i; j++){
            if(s[j] <= s[i]){
                res[i] = fmax(res[i], res[j]+1);
            }
        }
        cnt = fmax(cnt, res[i]);
    }
    cout << cnt+1;
    return 0;
}