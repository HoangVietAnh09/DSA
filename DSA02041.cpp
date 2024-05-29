#include <bits/stdc++.h>
using namespace std;
int n;
int cnt = 0;
void backTrack(int remain){
    if(remain == 1){
        cout << cnt << endl;
        return;
    }
    if(remain%3 == 0){
        cnt++;
        backTrack(remain/3);
        cnt--;
    }
    if(remain%2 == 0){
        cnt++;
        backTrack(remain/2);
        cnt--;
    }
    if(remain%2 != 0 && remain%3 != 0){
        cnt++;
        backTrack(remain-1);
        cnt--;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        backTrack(n);
    }
    return 0;
}
