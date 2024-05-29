#include <bits/stdc++.h>
using namespace std;
vector<int> a, b;
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
void add(Node *&root, int x){
	if(root == NULL) root = new Node(x);
	else{
		if(x < root->data) add(root->left, x);
		else add(root->right, x);
	}
}
void inOrder(Node *root){
	if(root == NULL) return;
	inOrder(root->left);
	b.push_back(root->data);
	inOrder(root->right);
}
bool solve(){
	for(int i = 0; i < a.size(); i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){	
	a.clear();
	b.clear();	
		int n;
		cin >> n;
		Node *root = NULL;
		while(n--){
			int x;
			cin >> x;
			a.push_back(x);
			add(root, x);
		}
		inOrder(root);
		cout << solve() << endl;
	}
	return 0;
}