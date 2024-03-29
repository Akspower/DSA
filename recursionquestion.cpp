#include <iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr,int& n ,int i){
    if(i>=n){
        return true;
    }

    if(arr[i+1]<arr[i])
    return false;
    return checkSorted(arr,n,i+1);
}






int binarySearch(vector<int> &g,int s,int e,int target){
    //base 
    //case 1 invalid array
    if(s>e){
        return -1;
    }
    
    int mid= (s+e)/2;
//case 2
if(g[mid]==target){
    return mid;
}
//right search
if(g[mid]<target){
    return binarySearch(g,mid+1,e,target);
}
//left search
else { //g[mid]>target
return binarySearch(g,s,mid-1,target);
}
}




int main(){


vector<int> v{10,20,30,40,50,60};
int n=v.size();
int i = 0;
bool isSorted=checkSorted(v,n,i);

if(isSorted){
    cout<<"array is sorted"<<endl;
}
else {
    cout<<"not sorted"<<endl;
}





vector<int> g{10,20,50,550,700,900,980};
int target=980;
int no=g.size();
int s=0;
int e=no-1;
int ans=binarySearch(g,s,e,target);

cout<<"answer at " <<ans<< " index "<<endl;







}