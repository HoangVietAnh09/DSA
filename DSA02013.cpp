#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> prime;
vector<int> a(201, 1);
int n, p, s;
void sang(){
    a[0] = a[1] = 0;
    for(int i = 2; i <= sqrt(200); i++){
        if(a[i] == 1){
            for(int j = i*i; j <= 200; j += i){
                a[j] = 0;
            }
        }
    }
    for(int i = 2; i <= 200; i++){
        if(a[i] == 1){
            prime.push_back(i);
        }
    }
}
void backTrack(int i, int sum, vector<int> ds){
    if(ds.size() == n){
        if(sum == s){
            v.push_back(ds);
        }
        return;
    }
    for(int j = i; j < prime.size(); j++){
        if(sum + prime[j] <= s){
            ds.push_back(prime[j]);
            backTrack(j+1, sum + prime[j], ds);
            ds.pop_back();
        }
        else return;
    }

}
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        v.clear();
        cin >> n >> p >> s;
        for(int i = 0; i < prime.size(); i++){
            if(prime[i] > p){
                backTrack(i, 0, {});
                break;
            }
        }
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for(auto i : v){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }

    }
    return 0;
}