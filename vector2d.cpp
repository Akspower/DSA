#include <iostream>
#include<vector>
using namespace std;
int main(){

vector <vector <int>> arr; 

vector<int> a{1,2,3};
vector<int> b{4,5,6};
vector<int> c{7,8,9};

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);


for(int i=0;i<arr.size();i++) {//for rows 
    for(int j=0;j<arr[i].size();j++){ // for column 
cout<<arr[i][j]<<" ";
    
    }
    cout<<endl;
}



// vector <vector<int>> arr(5,vector<int>(4,-8));
// also initialize  2d vector like this it means 2d vector name is arr which have 5 row and 4 column and fill all element with -8
}