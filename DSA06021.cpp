#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x, pos;
        cin >> n >> x;
        for(int i = 1; i <= n; i++){
            int tmp;
            cin >> tmp;
            if(x == tmp) pos = i;
        }
        cout << pos << endl;
        
    }
    return 0;
}