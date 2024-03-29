#include <iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a; //vector is dynamic array

a.push_back(5);
a.push_back(4);
a.push_back(6);

for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<a.size()<<endl;
cout<<a.capacity()<<endl;  //total space
a.pop_back() ;//pop las one
  


vector<int> b(5); //size and capacity both are 5
vector<int> c(5,7); // all five element value is 7
cout<<b.size()<<endl;
cout<<"c"<<c[0]<<endl;
int n;
cout<<"enter the value of n"<<endl;
cin>>n;


vector <int> d(n,12);
for(int i=0;i<d.size();i++)
{
    cout<<d[i]<<" ";
}
}