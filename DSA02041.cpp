#include <bits/stdc++.h>
using namespace std;
int n;
int res = 0;
int cnt = 0;
vector<int> v;
void backTrack(int i, int remain){
    if(remain == 1){
        v.push_back(res);
        return;
    }
    for(int j = i; j >= 1; j++){
        if(remain != 1){
            if(remain%3 == 0){
                remain /= 3;
                cnt++;
            }else if(remain%2 == 0){
                remain /= 2;
                cnt++;
            }else{
                remain--;
                cnt++;
            }
            
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
    }
    return 0;
}
