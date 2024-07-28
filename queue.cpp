#include <iostream>
#include<limits.h>
#include<queue>
using namespace std;


class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
  
  
    Queue(int size){
       this->size=size;
       arr=new int[size];
       front=0;
       rear=0;
    }

    void push(int data){
    if(rear==size){
        cout<<"queue is full "<<endl;

    }
    else{
        arr[rear]=data;
        rear++;
    }
    }
    void pop(){
    if(front==rear){
         cout<<"queue is empty "<<endl;
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
}

int getfront(){
    if(front==rear){
        cout<<"queue is  empty "<<endl;
        return -1;

    }
    else{
        return arr[front];
    }
}
bool isempty(){
    if(front==rear){
        return true;
    }
    else{
           return false;
        }
    
}
int getsize(){
    return rear-front;
}

};
















int main(){

// queue<int> q;

// q.push(5);
// q.push(10);
// q.push(15);
// q.push(20);

// cout<<"size of queue is "<<q.size()<<endl;
// q.pop();

// cout<<"size of queue is "<<q.size()<<endl;


// cout<<"front element "<<q.front()<<endl;

// if(!q.empty()){
//     cout<<"not empty"<<endl;
// }









Queue q1(10);

q1.push(10);
q1.push(20);
q1.push(30);
q1.push(40);
q1.push(50);


cout<<"size "<<q1.getsize()<<endl;
q1.pop();
    cout<<"size "<<q1.getsize()<<endl;

    cout<<"front"<<q1.getfront()<<endl; 

    if(q1.isempty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
}