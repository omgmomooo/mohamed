#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int x){
        val=x;
        next=nullptr;
    }
};

class linkedlist{
    public:
    Node* head;
    linkedlist(){
        head=nullptr;
    }
    void append(int x){
        Node* newnode=new Node(x);
        if(head==nullptr){
            head=newnode;
            
        }
        else{
            Node* current =head;
            while(current->next!=nullptr){
                current=current->next;
            }
            current->next=newnode;
        }
    }   
};



int main(){

Node *head;
Node *node1= new Node(5);
Node *node2 =new Node(8);
Node *node3= new Node(9);
Node *node4= new Node(10);

head=node1;
node1->next=node2;
node2->next=node3;
node3->next=node4;
node4->next=nullptr;


while(head!=nullptr){

    cout<<head->val<<endl;
    head=head->next;
}



}