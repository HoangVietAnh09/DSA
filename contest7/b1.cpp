#include <bits/stdc++.h>
using namespace std;
struct node{
    int heSo;
    int soMu;
    node* next;
};
class linkedList{
    private:
        node *head, *tail;
    public:
        linkedList(){
            head = NULL;
            tail = NULL;
        }
        void makeNote(int heSo, int soMu){
            node *tmp = new node;
            tmp->heSo = heSo;
            tmp->soMu = soMu;
            tmp->next = NULL;
            if(head == NULL){
                head = tmp;
                tail = tmp;
            }else{
                tail->next = tmp;
                tail = tail->next;
            }
        }
        void printList(){
            node* temp = head;
            while(temp != NULL){
                cout << temp->heSo << " " << temp->soMu << " ";
                temp = temp->next;
            }
        }
        
};


int main(){
    linkedList dt1;
    linkedList dt2;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0; i < s1.length(); i++){
        
    }
    for(int i = 0; i < s2.length()-4; i++){
        
    }
    dt1.printList();
    cout << endl;
    dt2.printList();
    return 0;
}