#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int res[10004][10004];
        int max = 0;
        for(int i = 0; i < a.length(); i++){
            for(int j = 0; j < b.length(); j++){
                if(i == 0 || j == 0) {
                    res[i][j] = 0;
                }
                else if(a[i] == b[j]){
                    res[i][j] = res[i-1][j-1]+1;
                    max = res[i][j];
                }else{
                    res[i][j] = fmax(res[i-1][j], res[i][j-1]);
                    max = res[i][j];
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}