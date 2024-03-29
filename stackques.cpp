#include <iostream>
#include<limits.h>
#include<stack>
using namespace std;

// void solve(stack<int> &s,int target){
//     //base
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     int topelement=s.top();
//     s.pop();
//     //recursive call
//     solve(s,target);
//     s.push(topelement);
// }

// void insertatbottom(stack<int> &s){
//     if(s.empty()){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     int target=s.top();
//     s.pop();
//     solve(s,target);
//     }





/jhabssbbbckab


//paranthesis 

//leetcode
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];

            //opening bracket
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                //closing bracket - ch
                if(!st.empty()) {
                    char topCh = st.top();
                    if(ch == ')' && topCh =='(') {
                        //matching brackets
                        st.pop();
                    }
                    else if(ch == '}' && topCh =='{') {
                        //matching brackets
                        st.pop();
                    }
                    else if(ch == ']' && topCh =='[') {
                        //matching brackets
                        st.pop();
                    }
                    else {
                        //brackets not matching
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }

        if(st.empty()) {
            //valid 
            return true;
        }
        else {
            return false;
        }
        
    }
};




int main(){


// stack <int> s;
// s.push(11); 
// s.push(22); 
// s.push(33); 
// s.push(44); 
// s.push(55); 

// insertatbottom(s);

// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }
// cout<<endl;














}