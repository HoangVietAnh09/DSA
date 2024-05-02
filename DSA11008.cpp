#include <bits/stdc++.h>
using namespace std;
bool check;
struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


void insert(Node *root, int n1, int n2, char c){
    if(root == NULL) return;
    if(root->data == n1){
        if(c == 'L') root->left = new Node(n2);
        else root->right = new Node(n2);
    }else{
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}
set<int> s;
void level(Node *root, int cnt){
    if(root->left == NULL && root->right == NULL){
        s.insert(cnt);
    }else{
        if(root->left != NULL) level(root->left, cnt+1);
        if(root->right != NULL) level(root->right, cnt+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        s.clear();
        int n;
        cin >> n;
        Node *a = NULL;
        while(n--){
            int u, v;
            char x;
            cin >> u >> v >> x;
            if(a == NULL){
                a = new Node(u);
                if(x == 'L') a->left = new Node(v);
                else a->right = new Node(v);
            }else{
                insert(a, u, v, x);
            }
        }
        level(a, 0);
        if(s.size() > 1) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}