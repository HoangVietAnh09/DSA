#include <bits/stdc++.h>
using namespace std;
int n, a[10004], used[10004];
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void backTrack(int i){
    for(int j = n; j >=1; j--){
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
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        backTrack(1);
        cout << endl;
        
    }
    return 0;
}