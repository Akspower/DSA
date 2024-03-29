#include <iostream>
using namespace std;
//pass by value will be create a copy
int add(int a, int b){
    int result=a+b;
    return result;
}
int main(){
int a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
int sum = add(a,b);
cout<<sum<<endl;








}