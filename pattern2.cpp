#include<iostream>
using namespace std;
int main (){
    for(int i=0;i<3;i++){
        if(i==0 || i==2){
            for(int j=0;j<5;j++){
            cout<<"* ";
            }
        }
        else {
        cout<<"* ";
           for(int i=0;i<3;i++){
            cout<<"  ";
           }
        cout<<"* ";
    }
    cout<<endl;
    }
}