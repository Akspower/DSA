#include <iostream>
using namespace std;
bool find(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if(a[i]==key)
        return true;
    }
    return false;
}




int main(){

int a[5]={1,2,3,4,5};
int size=5;
int key;
cout<<"Enter key to search"<<endl;
cin>>key;
if(find(a,size,key)){  //create function  
    cout<<"Found"<<endl;
}
else{
    cout<<"not Found"<<endl;
}




}






