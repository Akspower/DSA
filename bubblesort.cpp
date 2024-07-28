#include <iostream>
#include<vector>


using namespace std;
int main(){

vector<int> arr{10,4,5,7,1,2,43,56};
int n=arr.size();

for(int round=1;round<n;round++){
    for(int j=0;j<n-round;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
} 
//printing
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



}