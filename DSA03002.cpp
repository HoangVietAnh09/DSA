#include <bits/stdc++.h>
using namespace std;
int findMin(string &a, string &b){
    for(char x : a){
        if(x == '6') x = '5';
    }
    for(char x : b){
        if(x == '6') x = '5';
    }
    return stoi(a) + stoi(b);
}
int findMax(string &a, string &b){
    for(char x : a){
        if(x == '5') x = '6';
    }
    for(char x : b){
        if(x == '5') x = '6';
    }
    return stoi(a) + stoi(b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b, c, d;
    c = a;
    d = b;
    cin >> a >> b;
    for(char x : a){
        if(x == '6') x = '5';
    }
    for(char x : b){
        if(x == '6') x = '5';
    }
    cout << stoll(a) + stoll(b) << " ";
     for(char x : c){
        if(x == '5') x = '6';
    }
    for(char x : d){
        if(x == '5') x = '6';
    }
    cout << stoll(c) + stoll(d);

    return 0;
}