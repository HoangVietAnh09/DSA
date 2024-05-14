#include <bits/stdc++.h>
using namespace std;
struct Node{
    char c;
    Node *left, *right;
    Node(char x){
        c = x;
        left = right = NULL;
    }
};
bool check(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}
void inOrder(Node *root){
    if(root == NULL) return ;
    inOrder(root->left);
    cout << root->c;
    inOrder(root->right);
}
void preOrder(Node *root){
    if(root == NULL) return;
    cout << root->c;
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->c;
}
void solve(string s){
    stack<Node* > st;
    Node *root;
    for(int i = 0; i < s.length(); i++){
        if(!check(s[i])) st.push(new Node(s[i]));
        else{
            Node *tmp = new Node(s[i]);
            Node *t1 = st.top(); st.pop();
            Node *t2 = st.top(); st.pop();
            tmp->left = t2;
            tmp->right = t1;
            st.push(tmp);
        }
    }
    root = st.top();
    inOrder(root);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}