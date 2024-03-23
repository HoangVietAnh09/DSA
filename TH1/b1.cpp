#include <bits/stdc++.h>
using namespace std;
int n, x[10004], check[10004];
vector<int> v;
void in(){
    int tmp = 0;
    for(int i = 1; i <= v.size(); i++){
        tmp = tmp*10 + v[x[i]-1];
    }
    cout << tmp << endl;
}
void backTrack(int i){
    for(int j = 1; j <= v.size(); j++){
        if(check[j] == false){
            check[j] = true;
            x[i] = j;
            if(i == v.size()) in();
            else backTrack(i+1);
            check[j] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        while(n != 0){
            v.push_back(n%10);
            n /= 10;
        }
        sort(v.begin(), v.end());
        backTrack(1);
        v.clear();
    }
    return 0;
}