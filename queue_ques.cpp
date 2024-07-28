#include <iostream>
#include<limits.h>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element=q.front();
        q.pop();

        s.push(element);
    }

    while(!s.empty()){
        int element=s.top();
        s.pop();

        q.push(element);
    }
}


void reeversequeuerecursion(queue<int> &q1){
    //base
    if(q1.empty())
    return;
//step a
    int temp=q1.front();
    q1.pop();
//b
reeversequeuerecursion(q1);


//c
q1.push(temp);

}


//reverse k element 
 void reverseK(queue <int> &q2,int k){
   
    stack <int> s2;
    int count=0;
    int n=q2.size();
     if(k==0 || k>n)
        return;
    while (!q2.empty())
    {
        int temp=q2.front();
         q2.pop();
         s2.push(temp);
         count++;

         if(count==k)
         break;
    }
    
    //stack to queue 
    while(!s2.empty()){
        int temp=s2.top();
        s2.pop();
         q2.push(temp);
    }

    count=0;
    while(!q2.empty() && n-k!=0){
        int temp=q2.front();
         q2.pop();
         q2.push(temp);
         count++;

         if(count==n-k)
          break;
    }
 }


int main(){


queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

// cout<<"printing Queue before reverse "<<endl;
// while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
// }
// cout<<endl; 

reverseQueue(q);

cout<<"printing Queue after reverse "<<endl;
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<endl; 







queue<int> q1;
q1.push(100);
q1.push(200);
q1.push(300);
q1.push(400);
q1.push(500);

reeversequeuerecursion(q1);

cout<<"printing Queue using rcursion after reverse "<<endl;
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}
cout<<endl; 



queue<int> q2;
q2.push(5);
q2.push(15);
q2.push(25);
q2.push(35);
q2.push(45);

reverseK(q2,3);  //reverse upto 3 element



cout<<" reverse  partial element "<<endl;
while(!q2.empty()){
    cout<<q2.front()<<" ";
    q2.pop();
}
cout<<endl; 







}