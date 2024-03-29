#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;
int main(){

vector<int> arr{10,4,5,7,1,2,43,56};
 
sort(arr.begin(),arr.end());


for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}