#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
bool isPerfect;
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
int cntNode(Node *root){
    if(root == NULL) return 0;
    if(root->left == NULL & root->right == NULL) return 1;
    if(!(root->left != NULL && root->right != NULL)){
        isPerfect = false;
        return 0;
    }
    return cntNode(root->left) + cntNode(root->right);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        isPerfect = true;
        int n;
        cin >> n;
        Node *root = NULL;
        while(n--){
            int u, v;
            char x;
            cin >> u >> v >> x;
            if(root == NULL){
                root = new Node(u);
                if(x == 'L') root->left = new Node(v);
                else root->right = new Node(v);
            }else{
                insert(root, u, v, x);
            }
        }
        int cntL = cntNode(root->left);
        int cntR = cntNode(root->right);
        if(isPerfect && cntL == cntR){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}