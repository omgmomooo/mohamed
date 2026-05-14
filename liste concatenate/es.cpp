#include <iostream>
using namespace std;
struct Node {
    int valore;
    Node* next;
};
class Lista {
    public: 
    Node *head;
    Lista(){
        head = nullptr;
    }
    void eliminaduplicati(){
        Node *current=head;
        while(current!=nullptr&&current->next!=nullptr){
            int y= current->valore;
            if(current->next->valore==y){
                Node *elimina=current->next;
                current->next= current->next->next;
                delete elimina;
                

            }
            else{
                current=current->next;
            }
        }
    }
    void stampa(){
        Node *current=head;
        while(current != nullptr){
            cout<<current->valore<<endl;
            current = current->next;
        }

    }
};
int main(){
    Lista l;
    Node *n1= new Node;
    n1->valore=5;
    Node *n2= new Node;
    n2->valore=5;
    Node *n3= new Node;
    n3->valore=8;
    Node *n4= new Node;
    n4->valore=5;
    l.head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=nullptr;
    
    l.eliminaduplicati();
    l.stampa();


}
