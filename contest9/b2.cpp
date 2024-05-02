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
void levelOrder(Node* root){
    queue<Node* > Q;
    Q.push(root);
    while(!Q.empty()){
        Node *nd = Q.front();
        Q.pop();
        cout << nd->data << " ";
        if(nd->left != NULL) Q.push(nd->left);
        if(nd->right != NULL) Q.push(nd->right);
    }
    cout << endl;
}
int isPerfect(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    if(!(root->left != NULL && root->right != NULL)){
        check = false;
        return 0;
    }
    return isPerfect(root->left) + isPerfect(root->right);
}
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
int main(){
    int t;
    cin >> t;
    while(t--){
        check = true;
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
        int cntL = isPerfect(root->left);
        int cntR = isPerfect(root->right);
        if(check &&  cntL == cntR){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}