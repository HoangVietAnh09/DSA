#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    unordered_map<int, int> prefixSumCount;
    int prefixSum = 0;
    int count = 0;
    
    prefixSumCount[0] = 1;
    
    for (int i = 0; i < N; ++i) {
        prefixSum += A[i];

        if (prefixSumCount.find(prefixSum) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum];
        }
        
        prefixSumCount[prefixSum]++;
    }
    
    cout << count << endl;
    
    return 0;
}