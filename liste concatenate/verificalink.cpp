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
    bool isEmpty(){
        if(head == nullptr)
            return true;
        else
            return false;
    }
    void insericifine(int x){
        Node *current = head;
        while(current != nullptr){
            current = current->next;
        }
        Node *nuovo = new Node;
        nuovo->valore = x;
        current->next = nuovo;
    }
    void stampa(){
        Node *current=head;
        while(current != nullptr){
            cout<<current->valore<<endl;
            current = current->next;
        }

    }
    int somma(){
        Node *current =head;
        int i=0;
        while(current!=nullptr){
            i+=current->valore;
            current=current->next;
        }
        return i;
    }
    int contapari(){
        Node *current=head;
        int i=0;
        while (current!=nullptr){
            if(current->valore%2==0){
                i++;
            }
        }
        return i;
    }
    int massimo(){
        Node *current=head;
        int max=0;
        current->valore=max;
        while(current!=nullptr){
            if(current->valore>max){
                max=current->valore;

    } 

}
return max;
    }
    void eliminatesta(){
        if(head!=nullptr){
            Node *elimina=head;
            head=head->next;
            delete elimina;
        }
        
    }
    bool listaordinata(){
        Node *current=head;
        while(current!=nullptr){
            if(current->valore > current->next->valore){
                return false;
            }
            current = current->next;
        }
        return true;
    }
};
int main(){
    Lista l;
    l.insericifine(1);
    l.insericifine(2);
    l.insericifine(3);
    l.stampa();
    cout<<"la somma è: "<<l.somma()<<endl;
    cout<<"i numeri pari sono: "<<l.contapari()<<endl;
    cout<<"il massimo è: "<<l.massimo()<<endl;
    l.eliminatesta();
    l.stampa();
    if(l.listaordinata()){
        cout<<"la lista è ordinata"<<endl;
    }else{
        cout<<"la lista non è ordinata"<<endl;
    }
}
