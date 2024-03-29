#include <iostream>
using namespace std;
int main(){
  int a[]={1,2,3};
  int b[3];
  b[0]=1;
  cout<<b[0]<<endl;
  cout<<a[2]<<endl;


  for(int i=0;i<3;i++){
    cin >> b[i];
  }

 
 for(int i=0;i<3;i++){
    cout << b[i]<<" "<<endl;
 }
//array allways pass by reference it means value also change in main 







}