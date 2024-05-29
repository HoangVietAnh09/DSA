#include <bits/stdc++.h>
using namespace std;
int main(){
    char c1, c2;
    cin >> c1 >> c2;
    string s;
    for(char c = min(c1, c2); c <= max(c1, c2); c++){
        s += c;
    }
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}