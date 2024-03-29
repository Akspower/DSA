#include <iostream>
#include<limits.h>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;


Stack(int size){
    arr = new int[size];
    this->size=size;
    top=-1;

}

//function of stack
void push(int data){
if(size-top>1){
//space available
//insert
top++;
arr[top]=data;
}
else{
    cout<<"stack overflow"<<endl;
}
}
void pop(){
if(top==-1){
    cout<<"stack underflow "<<endl;
}
 else {
    top--;
}

}

int  gettop(){
if(top==-1){
    cout<<"stack is empty "<<endl;
}
else{
    return arr[top];
}
}

int getsize(){ //element present in stack
return top+1;
}
bool isempty(){
if(top==-1){
    return true;
}
else{
    return false;
}
}

};


void printmiddle(stack<int> &sta,int &totalsize){

    if (sta.size()==totalsize/2+1){
        cout<<"middle element is "<<sta.top()<<endl;
        return;
    }
    int temp=sta.top();
    sta.pop();


//recursive call
    printmiddle(sta,totalsize);
}




int main(){

stack<int> st;


st.push(10);
st.push(20);
st.push(30);
st.pop();
 
cout<<"top element "<<st.top()<<endl;
cout<<"empty or not "<<st.empty()<<endl;
cout<<"size "<<st.size()<<endl;

//printing
// while(!st.empty()){
//     cout<<st.top()<<" ";
    // st.pop();   // without this not possible
// }
// cout<<endl;  //here infinite run but able to run on other compiler






//for class
Stack s(10);

s.push(100);
s.push(200);
s.push(300);
s.push(400);
s.push(500);


// while(!s.isempty()){
//     cout<<s.gettop()<<" ";
//     s.pop();   // without this not possible
// }
// cout<<endl; //run on other compiler








cout<<"Find Middle element is stack"<<endl;

stack<int> sta;

sta.push(1);
sta.push(2);
sta.push(3);
sta.push(4);
sta.push(5);
sta.push(6);
sta.push(7);


int totalsize=sta.size();
printmiddle(sta,totalsize);





// reverse string in stack

string str="aditya";
stack<char> name;
for(int i=0;i<str.length();i++){
    name.push(str[i]);
}

while(!name.empty()){
    cout<<name.top()<<"";
    name.pop();
}
cout<<endl;

}