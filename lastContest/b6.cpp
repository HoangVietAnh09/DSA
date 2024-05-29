#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> res;
vector<int> v;
bool check(){
    int sum = 0;
    for(int i = 0; i < v.size()-1; i++){
        sum += v[i]-v[i+1];
    }
    return sum > 0;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    while(next_permutation(v.begin(), v.end())){
        if(check()){
            for(auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}