#include <bits/stdc++.h>
using namespace std;
int a[10004], ok;
string s;

void sinh(){
    int i = s.length()-1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            a[i] = s[i] - '0';
        }
        sinh();
        for(int i = 0; i < s.length(); i++) cout << a[i];
        cout << endl;
    }
    return 0;
}