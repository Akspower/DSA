#include <iostream>
#include<limits.h>
using namespace std;





class Node{
    public:
    int data;
    Node* next;

     Node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* getmiddle(Node* &head){
    if(head==NULL){
        cout<<"empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }

    Node* slow=head; //traverse 1 element after fast
    Node* fast=head; //traverse 2 element firstly


    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;

}
int getlength(Node* head){
int len=0;
Node* temp=head;
while (temp!=NULL){
    temp=temp->next;
    len++;

}
return len; 
} 


//reverse k nodes means ,not reverse whole list

Node* reverseKnodes(Node* &head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=getlength(head);
    if(k>len){
        cout<<"enter valid  k "<<endl;
        return head;
    }
    Node*prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;

    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward!=NULL){
     head->next=   reverseKnodes(forward,k);
    }
    return prev;// return head of modified LL
}


int main(){
Node* head=new Node(10);
Node* second=new Node(20);
Node* third=new Node(30);
Node* fourth=new Node(40);
Node* fifth=new Node(50);
Node* sixth=new Node(60);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=NULL;
print(head);

cout<<"Middle element is "<<getmiddle(head)->data<<endl;


head=reverseKnodes(head,3);
print(head);
}