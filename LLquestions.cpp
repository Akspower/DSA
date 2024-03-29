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


void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool checkpalindrome(Node* &head){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return true;
    }
    if(head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //slow is at middle

    //reverse after middle
    Node* reverseLLhead=reverse(slow->next);

    slow->next=reverseLLhead;


Node* temp1=head;
Node* temp2=reverseLLhead;
while(temp2!=NULL){
    if(temp1->data!=temp2->data){
//not palindrome
            return false;
    }
    else{
     temp1=temp1->next;
     temp2=temp2->next;
    }
    return true;
}



}













void removeDuplicates(Node* &head) {
        if( head == NULL) {
                cout << "LL is empty" << endl;
                return;
        }
        if(head -> next == NULL) {
                cout << "Single Node in LL" << endl;
                return ;
        }

        // >1 node in LL
        Node* curr = head;

        while(curr != NULL) {
                if((curr -> next != NULL) && (curr -> data == curr -> next -> data) ) {
                        //equal
                        Node* temp = curr -> next;
                        curr -> next = curr -> next -> next;
                        //delete node
                        temp -> next = NULL;
                        delete temp;
                }
                else {
                        // not equal
                        curr = curr -> next;
                }
        }


}



int main(){
//do not create like this
Node* head=new Node(10);
Node* second=new Node(20);
Node* third=new Node(30);
Node* fourth=new Node(20); //in remove duplicate ques after third it goes to fifth
Node* fifth=new Node(10);


head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;



bool ispalindrome=checkpalindrome(head);


if(ispalindrome){
    cout<<"Palindrome present in LL "<<endl;
}
else {
cout<<"not a Palindrome "<<endl;
}











//change the LL according to question
//run only on sorted LL
cout << "input LL: ";
  print(head);

  removeDuplicates(head);
  cout << "output LL: " ;
  print(head);



}