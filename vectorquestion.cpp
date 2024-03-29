#include <iostream>
#include<vector>
using namespace std;
int findunique(vector<int> a){
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans^a[i];
    }
    return ans;
}

int main(){
int n;
cout<<"found a unique "<<endl;
cout<<"enter the size of n"<<endl;
cin>>n;
//unique element
vector<int> a(n);
cout<<"enter the element"<<endl;
for(int i=0;i<a.size();i++){
    cin>>a[i];
   
}

 int uniquelement=findunique(a);
 cout<<"Unique Element"<<uniquelement<<endl;






cout<<"union question"<<endl;
int b[]={1,2,3,3};
int sizeb=4;
int c[]={1,3};
int sizec=2;
vector<int> ans;
for(int i=0;i<sizeb;i++ ){
    ans.push_back(b[i]);
}
for(int j=0;j<sizec;j++ ){
    ans.push_back(b[j]);

}
cout<<"print answer array"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<< " ";
}



cout<<"intersection "<<endl;
vector<int> d{1,2,3,4,5};
vector<int> e{2,3,4};
vector <int> intersection;
for(int i=0;i<d.size();i++){
    int element=d[i];
for(int j=0;j<e.size();j++){
    if(element==e[j]){
        intersection.push_back(element);
    }
  }
}
for(auto value: intersection){
    cout<<value<<" ";
}
cout<<endl;




cout<<"triplet sum"<<endl;
vector<int> f{10,20,30,40};
int sum=80;
for(int i=0;f.size();i++){
int element1=f[i];
for(int j=i+1;j<f.size();j++){
    int element2=f[j];
    for(int k=j+1;k<f.size();k++){
        int element3 =f[k];
        if(element1+element2+element3==sum){
            cout<<"Found"<<element1<<","<<element2<<","<<element3<<endl;
        }
    }
}
}

}