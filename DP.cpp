#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;


int fib(int n,vector<int> &dp){
if(n<=1){
return n;
}

//if(dp[n]==-1){
//     return dp[n];
// }

{
    dp[n] =fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
}















//minimum coin
int solvecoin(vector<int> &num,int x,vector<int> &dp){
    if(x==0){
        return 0;
    }
    if(x<0){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int mini =INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans=solvecoin(num,x-num[i]);
        if(ans!=INT_MAX)
        mini=min(mini,1+ans);

    }
    dp[x]=mini;
    return mini;
}





int main(){

int n;
cin>>n;

vector<int> dp(n+1);
for(int i=0;i<=n;i++){
    dp[n]=-1;
}
cout<<fib(n,dp)<<endl;







// vector<int> dp(int x+1.-1);
int ans=solvecoin(,11,dp);

if(ans==INT_MAX){
    return -1;

}
else
return ans;
}




}