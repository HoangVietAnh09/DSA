#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    bool check = true;
    cin >> n >> k;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    v.push_back(-1);
    for(int x : s) v.push_back(x);
    vector<int> res(v.begin(), v.begin()+k);
    int l = v.size()-1;
    while(check){
        for(int i = 0; i < k; i++) cout << res[i] << " ";
        int i = k-1;
        while(i >= 0 && res[i] == l-k+i+1){
            i--;
        }
        if(i == -1) check = false;
        else{
            res[i]++;
            for(int j = i + 1; j < k; j++){
                res[j] = res[j-1]+1;
            }
        }
        cout << endl;
    }
    return 0;
}
