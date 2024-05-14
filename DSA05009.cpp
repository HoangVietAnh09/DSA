#include <bits/stdc++.h>
using namespace std;
int a[10004];
bool check;
int n, sum;
void backTrack(int i, int sum){
    if();

}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum%2 != 0){
            cout << "NO\n";
            break;
        }

    }
    return 0;
}