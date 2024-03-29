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
//insert node right at the end of linked list
void insertathead(Node* &head,int data){
Node* newNode=new Node(data);
newNode->next=head;
head=newNode;
}

// void insertattail(Node* &tail,int data){
//     Node* newNode= new Node(data);
//     tail->next=newNode; 
//     tail=newNode;
// }



void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

bool search(Node* head ,int key){
  Node*temp=head;
  while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    temp=temp->next;
  }
  return false;
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


//deletion
void deletenode(int position,Node* &head){
  if (head==NULL){
    cout<<"delete not poosible empty"<<endl;

  }
  if(position==1){  
    Node* temp=head;
     head=head->next;
     temp->next=NULL;
     delete temp;
     return;
  }
  int i=1;
  Node* prev=head;
  while(i<position-1){
     prev=prev->next;
     i++;

  }
  Node *cur=prev->next;
  prev->next=cur->next;
  cur->next=NULL;
  delete cur;
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



int main(){

Node* head= NULL;            //new Node(10);
insertathead(head,20);
insertathead(head,50);
insertathead(head,60);
insertathead(head,70);

print(head);



cout<<endl<<search(head,32)<<endl; //it will print 0 






insertatposition(101,2,head);
print(head);

cout<<endl<<"deletion process"<<endl;

deletenode(2,head);
print(head);





}