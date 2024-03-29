#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;


    int mid=(start+end)/2;

while(start<=end){
    int element=arr[mid];


    if(element==target){
        return mid;
    }
    else if (target<element){
        //search in left
        end=mid+1;
    }
    else  {
        //search in right
        start=mid+1;
    }
    mid=(start+end)/2;

}
return -1;
}
int main(){
int arr[]={2,4,6,8,10,12,18};
int size=7;
int target=4;

int indexoftarget=binarysearch(arr,size,target);

if(indexoftarget==-1){
    cout<<"target not found"<<endl;

}
else{
    cout<<"target found "<<indexoftarget << " index"<<endl;
}



//in built function


vector<int> v{1,2,3,4,5,6};

if(binary_search(v.begin(),v.end(),3)){
    cout<<"found";

}
else{
    cout<<"not found";
}








}







