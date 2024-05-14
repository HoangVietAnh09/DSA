#include <bits/stdc++.h>
using namespace std;
void in(vector<int>&arr, int i, vector<int>&res){
    if(i < arr.size()){
        in(arr, 2*i+1, res);
        res.push_back(arr[i]);
        in(arr, 2*i+2, res);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), res;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        in(arr, 0, res);
        for(int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}