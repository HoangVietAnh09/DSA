#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004];
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }else{
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1]+1;
        }
    }
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        sinh();
        for(int i = 1; i <= k; i++) cout << a[i] << " ";
        cout << endl;

    }
    return 0;
}