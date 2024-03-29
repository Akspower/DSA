#include <iostream>
#include<limits.h>
using namespace std;
int main(){


int arr[5]={1,3,5,3,8};
int size=5;
int mini=INT_MAX;

for(int index=0;index<size;index++){
if(arr[index]<mini){
    mini=arr[index];
}
}
cout<<"maximum is "<<mini<<endl;





int brr[]={0,1,0,0,0,0,1,1,1,0,5,2,1,0};
int sizes=14;
int countzero=0;
int countone=0;
for(int i=0;i<sizes;i++){
    if(brr[i]==0){
        countzero++;
    }
    if(brr[i]==1){
        countone++;
       
    }
}
cout<<"zero's are "<<countzero<<endl;
cout<<"one's are "<<countone<<endl;


int crr[]={10,20,30,40,50,60,70,80,90,100};
int  n=10;
int start=0;
int end=n-1;


while (true)
{
    if(start>end)
    break;
    
    if(start==end){
        cout<<crr[start]<<" ";
    }
    else{
        cout<<crr[start]<<" ";
        cout<<crr[end]<<" ";
    }
   
   start++;
   end--;
  
   
 }
  cout<<endl; 
int drr[]={50,60,20,70,25,47,33};
int  no=7;
int s=0;
int e=no-1;
 while(s<=e){
    swap(drr[s],drr[e]);
    s++;
    e--;
 
 
 }
for(int i=0;i<no;i++){
    cout<<drr[i]<<" ";
 }



}
 














