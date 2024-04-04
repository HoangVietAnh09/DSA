#include <bits/stdc++.h>
using namespace std;
char c;
int k;
int a[1004];
void in(){
    for(int i = 1; i <= k; i++){
        cout << (char)(a[i]+64);
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = a[i-1]; j <= (int)c-64; j++){
        a[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    cin >> c >> k;
    a[0] = 1;
    backTrack(1);

    return 0;
}