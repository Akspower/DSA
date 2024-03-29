#include <iostream>
#include<limits.h>
using namespace std;



class Node{
    public:
    int data;
    Node* next;


  Node(){
    this->data=0;
    this->next=NULL;
  }  

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
  //delete anode
  ~Node(){
    cout<<"node with value "<<this->data<<" deleted successfully"<<endl;
  }
};
void insertathead(Node* &head,int data){
Node* newNode=new Node(data);
newNode->next=head;
head=newNode;
}
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void insertatposition(int data,int position,Node* &head){
  if(head==NULL){
    Node* newNode=new Node(data);
    head=newNode;
    //tail=newNode;
    return;
  }

  // if(position==0){
  //   insertathead( head, tail,data);
  //   return;
  // }

int i=1;
Node* prev=head;
while(i<position){
  prev=prev->next;
  i++;
}
Node* cur=prev->next;
Node* newNode=new Node(data);

newNode->next=cur;

prev->next=newNode; 

}
Node* reverseusingLoop(Node* head ) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL ) {
                Node* temp = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}

Node* reverseusingRecursion(Node* prev,Node* curr){
    //base case
    if(curr==NULL)
    return prev;
    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;

    return reverseusingRecursion(prev,curr);
}
int main(){

Node* head= NULL;            //new Node(10);
insertathead(head,20);
insertathead(head,50);
insertathead(head,60);
insertathead(head,70);

print(head);
 
 cout<<endl;

head=reverseusingLoop(head);


print(head);












}