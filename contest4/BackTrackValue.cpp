#include <bits/stdc++.h>
using namespace std;
int a[10004];
void in(int i){

}
void backTrack(int x, int i, int s){
    for(int j = x; j >= 1; j--){
        a[i] = j;
        if(j == s){
            in(j);
        }else if(j < s) backTrack(j, i+1, s-1);
    }
}
int main(){

}