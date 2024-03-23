#include <iostream>
#include <vector>

using namespace std;

int minLen = 1e6;
void backTrack(vector<int> &a, int sum, int curSum, int start, int len){
    if(sum == curSum){
        minLen = min(minLen, len);
        return;
    }
    if(curSum > sum || start == a.size()){
        return;
    }
    backTrack(a, sum, curSum+a[start], start+1, len+1);
    backTrack(a, sum, curSum, start + 1, len);

}


int main() {
    int n, S;
    cin >> n >> S;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    backTrack(arr, S, 0, 0, 0);
    cout << minLen << endl;

    return 0;
}