#include <iostream>
using namespace std;
int n, k, i, x[10004], chuaXet[1004];
bool check(){
    int c1 = 0, c2 = 0, c3 = 0;
    for(int i = 1; i <= k; i++){
        if(char(x[i]+64) == 'A') c1++;
        else if(char(x[i]+64) == 'B') c2++;
        else if(char(x[i]+64) == 'C') c3++;
        else return false;
    }
    if(c1 <= c2 && c2 <= c3 && c1 != 0 && c2 != 0 && c3 != 0) return true;
    return false;
}
void in(){
    if(check()){
        for(int i = 1; i <= k; i++){
            cout << char(x[i]+64) << "";
        }
        cout << endl;
    }
    
}
void backTrack(int i){
    for(int j = 1; j <= k; j++){
        x[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    cin >> n;
    x[0] = 1;
    for(k = 3; k <= n; k++){
        backTrack(1);
    }
    return 0;
}