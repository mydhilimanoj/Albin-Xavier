Construction of a simple linked list with 3 nodes nd printing

#include <stdio.h>
class Node{
    public:
        int data;
        Node* next ;
};
Node* head=NULL;
void printll(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
int main(){

    Node* first=NULL;
    Node* second=NULL;
    Node* third=NULL;


    first=new Node();
    second=new Node();
    third=new Node();

    

    first ->data=1;
    first ->next=second;
    head=first;

    second ->data=2;
    second ->next=third;

    third ->data=3;
    third ->next=NULL;

    printll(head);

    return 0;
}

inserting into LL

inserting beg


void insertbeg(int d){
    Node* ptr=new Node();
    ptr->data=d;
    ptr->next=head;
}

insering ending


void insertend(int j){
    Node *ptr=new Node();
    ptr->data=j;
    ptr->next=NULL;

    if(head==NULL){
        head=ptr;
    }
    else{
        Node* temp=new Node();
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
}

rev

void rev(){
    Node *p,*c,*n;
    c=head;
    p=NULL;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}










