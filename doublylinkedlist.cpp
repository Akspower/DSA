#include <iostream>
#include<limits.h>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* next;

Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;

}



};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout<<endl;
}


//length
int getlength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


//insert
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void inserattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }

    //insert last
    if(temp->next==NULL){
        inserattail(tail,d);
        return;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

int main(){


Node *node1=new Node(10);
Node* head=node1;
Node* tail=node1;
//print(node1);

print(head);


cout<<getlength(head); 
cout<<endl;


//pointing head
insertathead(head,22);
insertathead(head,24);
insertathead(head,26);
print(head);

inserattail(tail,30);
inserattail(tail,40);
inserattail(tail,50);
print(head);

insertatposition(tail,head,3,55);
insertatposition(tail,head,2,75);
insertatposition(tail,head,1,100);
print(head);
}

//double