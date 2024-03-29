#include <iostream>
using namespace std;

int factorial (int n){
//base
if(n==1)
return 1;

int chotiproblemAns= factorial(n-1);
int badiproblemAns= n* chotiproblemAns;
return badiproblemAns;

}

int printcounting(int no){
    //base
    if(no==0){
        return 1;
    }
    //process
  cout << no << endl;  

//recursive relation
printcounting(no-1);
}

int fib(int num){
    if(num==1){
        return 0;
    }
    if(num==2){
        return 1;
    }
    int ans = fib(num-1)+fib(num-2);
    return ans;
}




int main(){

int n;
cout<<"Enter the value of n "<<endl;
cin>>n;
int ANSWER = factorial(n);
cout<<"Factorial value is "<<ANSWER<<endl;


int no;
cout<<"Enter the value of no for print counting "<<endl;
cin>>no;
printcounting(no);


int num;
cout<<" Enter the term you want to see"<<endl;
cin>>num;
int ans=fib(num);
cout<< num <<"nth term is "<<ans<<endl;


}