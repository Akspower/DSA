void solve(stack<int> &s,int target){
    //base
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    //recursive call
    solve(s,target);
    s.push(topelement);
}

void insertatbottom(stack<int> &s){
    if(s.empty()){
        cout<<"stack is empty"<<endl;
        return;
    }
    int target=s.top();
    s.pop();
    solve(s,target);
    }