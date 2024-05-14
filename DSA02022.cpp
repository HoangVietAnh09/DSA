#include <bits/stdc++.h>
using namespace std;
string s(8,'0');
vector<string> res;
void add(){
    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4));
    if(d > 0 && d < 32 && m > 0 && m < 13 && y >= 2000){
        string tmp = s;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        res.push_back(tmp);
    }
}
void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        if(j == 0) s[i] = '0';
        else s[i] = '2';

        if(i == 7) add();
        else backTrack(i+1);

    }
}
int main(){
    backTrack(0);
    sort(res.begin(), res.end());
    for(auto x : res){
        cout << x << endl;
    }
    return 0;
}