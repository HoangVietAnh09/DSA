#include <bits/stdc++.h>
using namespace std;
char c, b;
int t1, t2;
int n, a[10004], used[10004];
void in(){
    for(int i = 1; i <= n; i++){
        cout << char(a[i]-1+t2);
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            a[i] = j;
            used[j] = 1;
            if(i == n){
                in();
            }else{
                backTrack(i+1);
            }
            used[j] = 0;
        }
        
    }
}
int main(){
    int t = 1;
    
    while(t--){
        cin >> c >> b;
        t1 = max(int(b), int(c));
        t2 = min(int(b), int(c));
        n = t1-t2+1;
        backTrack(1);
        
    }
   
    return 0;
}