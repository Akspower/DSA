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
}